
#include "uart.h"


#define IOPORT_A (1UL<<2)  //APB2 peripheral clock enable bit position 2 for PORT A 

#define UART2EN 	(1UL<<17)  //APB1 peripheral clock enable register (RCC_APB1ENR) bit 17 for UASRT 2
#define AFIO_MAPR ~(1UL<<3)  //AFIO_MAPR default value for TX is PA2 and for RX is PA3 i.e AFIO_MAPR is 0
//#define BAUD_RATE 115200

#define CR1_TE (1UL<<3)      //USART TX enable
#define CR1_RE (1UL<<2)			 //USART RX enable
#define CR1_UE (1UL<<13)     //enable UART

/*refer pg 818 of RM */
#define SR_TXE (1U<<7)        //USART status register(TXE bit =1,means empty)
#define SR_RXE (1U<<5)							//USART status register(RXE bit =1,means data available)

void uartInit(){
	
	//Enable clock access to GPIOA
	  RCC->APB2ENR |= IOPORT_A;
	
/***************PA2********************************************/	
	/***Conf bit 10 and 11 to 0 and 1 respectively****/
		GPIOA->CRL &= ~(1UL<<10); //Alternate func push/pull	
		GPIOA->CRL |=  (1UL<<11);//Alternate func push/pull
	
	/***Mode bit 8 and 9 to 1 and 1 for 50Mhz speed****/
		GPIOA->CRL |= (1UL<<8); 
		GPIOA->CRL |= (1UL<<9);
	
	
/****************PA3*****************************************/
	/***Conf bit 14 and 15 to 1 and 0 respectively****/
		GPIOA->CRL &= (1UL<<14); //Input floating - reset state value	
		GPIOA->CRL |= ~(1UL<<15);//Input floating - reset state value	
	
	/***Mode bit 12 and 13 to 0 and 0 for input pin****/
		GPIOA->CRL |= ~(1UL<<12); //
		GPIOA->CRL |= ~(1UL<<13);	
	
	
//Enable clock access to USART2	
		RCC->APB1ENR |= UART2EN;
	
//No remaping of USART pin.AFIO_MAPR default value for TX is PA2 and for RX is PA3
	  AFIO->MAPR |= AFIO_MAPR;

			
	/*
		Baudrate rate is 9600,PCLK1 =8Mhz,Baudrate = PCLK1/(16 * USARTDIV)
			USARTDIV=8000000/16 * 9600 = 52.08333333
			DIV_MANTISSA = 0d52 = 0x34
			DIV_FRACTION = 16 * 0.08333333 =0d1.3333328 ~ 0d2 = 0x2
			USARTDIV = BRR =  0x342 
			
In the Power,Reset and Clock Control Block in simulation set ihe OSC to 8Mhz which gives a system clock of 8MHz.
The PCLK1 is also 8Mhz.The USART is clocked from PCLK1

			The achieved baud rate as seen in the Peripherals-Usart's-USART2 is 9592 
	*/	
	USART2->BRR = 0x342;

//config transfer direction only TX this time (RM pg 821)
		USART2->CR1 =  CR1_TE;  //here we reset the whole register and only set the transmit enable so that any junk values 
														//are removed and also M bit is cleared to have 1 start bit,8 data bits and a 1 stop bit.
//enable the uart module
    USART2->CR1 |= CR1_UE;

}



int uartWrite(int character){
	
	//Make sure transmit data register is empty
		while(!(USART2->SR & SR_TXE));//if SR_TXE bit is 1,means transmission is done, else SR_TXE is 0 means  wait here
		
			
	// write a character  to transmit to the DR register
		USART2->DR = (character & 0xFF); //We do anding with 0xFF to send an 8-bit character 
	
	return 1;	
	
}


int uartRead(void){
	//Make sure transmit data register is empty
		while(!(USART2->SR & SR_RXE));	//if SR_RXE bit is 1,means reception is done, else SR_RXE is 0 means  wait here
	  
	return USART2->DR;
}


/********Re-Implementing C Library functions for Retargeting printf()***********/
/******Redifining the FILE structure along with __stdout for fputc and __stdin for fgetc **********/

FILE __stdout;
FILE __stdin;
FILE __stderr;
	
 /*Reads a character from UART. If the character is a carriage return ('\r'), it converts it to a newline ('\n') 
	for better handling in text input. It also echoes the character back to the UART.*/
 int fgetc(FILE *f){
    int c;
	 c = uartRead();    //read from UART
 if(c =='\r'){        //convert carriage return to a newline
   uartWrite(c);      //echo the carriage return 
	 c = '\n';          //change to a newlinw
  }
  uartWrite(c);       //echo the character
  return c;	          //return the character read
 }

 /*Sends a character to the UART*/
   int fputc(int c, FILE *stream){
	   return uartWrite(c);
	 }
	 
/*	 int ferror(FILE *stream){
	  return 1;
	 }
	 
	
	 long int ftell(FILE *stream){
	 	  return 1;

	 }
	 int fclose(FILE *f){
	  return 1;
	 }
	 int fseek(FILE *f, long nPos, int nMode){
		 return 0;
	 }
	 
	 int fflush(FILE *f){
	  return 1;
	 }
*/

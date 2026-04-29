#include "uart.h"
#include "stdio.h"

int main(void){

	uartInit();
	
	char ch = 'A';// A variable declard
	printf("The Character %c has the character code %d.\n ",ch,ch);
	for( ; ch <= 'Z'; ++ch )
	printf("%2c", ch);
	
	while(11){}
}
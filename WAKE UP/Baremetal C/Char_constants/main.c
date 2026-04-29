#include "uart.h"
#include <stdlib.h>
#include <wchar.h>
#include <stdio.h>

int8_t c = '\xA3';  // SIGNED REPRESENTATION- 1 byte
uint8_t ch = '\xA3'; // unsigned representation- 2 byte 

wchar_t wCh = L'a'; // 2 bytes are used for storage 
char aChar = 'a';  // 1 byte is used for storage  

// wchar_t wdCh = 'L'\u00B0; //will not work in kiel 
int main(void){
	uartInit();
	
	printf("Signed character at: %x is %c with Code: %d\n",&c ,c ,c);
	printf("Unsigned charcter at : %x is %c with Code: %d\n",&ch ,ch ,ch);
	
	printf("Wide character: %x is %lc with Code %d\n",&wCh ,wCh ,wCh);
	printf("Not a wide character %x : %c with Code %d\n",&aChar ,aChar ,aChar);


}
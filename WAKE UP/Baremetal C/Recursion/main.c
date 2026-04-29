#include "uart.h"

#include <stdio.h>
#include <stdlib.h>

double power ( double , unsigned int );

int main(){
	
	uartInit();
	printf("2.2 to the power of 3 is %.4f\n",power(11.456, 33277464 ) );
	
	return 0; 	
}

double power ( double base, unsigned int exp)
{
	if( exp == 0) return 1.00;
	else return base * power ( base, exp-1 );
	
}
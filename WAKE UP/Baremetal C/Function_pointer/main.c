#include "uart.h"
#include "stdio.h"
#include <limits.h>

int func0() {puts("This is Function func0(). "); return 0;}
int func1() {puts("This is Function func1(). "); return 0;}

/* The first void is the return type of the two functions and the second void is the parameter of functions*/
int(*funcTable[2])(void) = { func0, func1 }; // Array of two parameter to functions returning void 

int main(){
	
	uartInit();
	
	for( int i = 0; i < 2; i++) // use the loop counter as the array 
	{
		funcTable[i](); // Index
	}

}
	
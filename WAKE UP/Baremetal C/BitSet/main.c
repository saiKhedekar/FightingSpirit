#include "uart.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

unsigned int setBit(unsigned int, unsigned int);

int main(){

	uartInit();
	unsigned int a = 6;  // Bit pattern: 0 0  ..... 0 0 0 1 1 0 
	printf("a = %u\n",a);
	
	
	a = setBit(a, 4);    //  Bit pattern: 0 0 ... 0 1 0 1 1 0
	printf("setBit(a,4) = %u\n",a);    // 22 = 16 + 6 
}

unsigned int setBit(unsigned int mask , unsigned int p)
{
	if(p >= CHAR_BIT * sizeof(int))
	{
		return mask;
	}
	else
	{
		return mask | (1<<p);
	}

}
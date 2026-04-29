#include "uart.h"
#include <stdlib.h>
#include <stdio.h>
#include <complex.h>
#include <math.h>
#include <limits.h>	//used in UINT_MAX

char *strcpy_( char * restrict s1, const char* restrict s2 );
/*No aliasing means the pointers refer to different memory locations, and there is no risk
of modifying one through the other. Aliasing means two pointers might refer to the same memory location,
which requires the compiler to be more cautions about optimization.

When you use restrict, you're telling the compiler, "Trust me, these pointers don't overlap,"
allowing it to optimize more effectively.
*/

int main(void){
	uartInit();
	
	char src[] = "strcpy example . . .",
		
	dest[sizeof(src)];
	
	strcpy_( dest, src);
	puts(dest);
	
	while(1){
	}
	
}

char *strcpy_( char* restrict s1, const char* restrict s2 )
{
		int i = 0;
		do
		{
			s1[i] = s2[i];						// The loop body: copy each character
		}
		while ( s2[i++] != '\0' );	// End the loop if we just copied a '\0\.
		return s1;
}
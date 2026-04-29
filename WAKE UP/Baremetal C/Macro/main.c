#include "uart.h"
#include  <stdio.h>
#include <math.h>   // Prototypes pf the cos() and exp() functiond.

#define PI          3.141593
#define STEP        (PI/8)
#define AMPLITUDE   1.0
#define ATTENUATION 0.1   // Attenuation in wave progation 
#define DF(x)       exp(-ATTENUATION*(x)) 
#define FUNC(x)     (DF(x)  * AMPLITUDE * cos(x))   // Attempted oscillation


/* define STR(s)   #s
printf(%s\n" , STR (HELLO WORLD));

the above expands to 
printf( "%s\n" , "HEllo World");
*/ 
// For the Function DIspay 
/*
#s in STR(S) iis the stringfunction operator in the c prepocessor.
It turns the arguement s into a string libetral without expanding it.

XSTR(s) passes s to STR(S), allowing it to expand s first, then stringify it.
XSTR allows the macro to first expand, then stringify/

*/
#define STR(s)   #s
#define XSTR(s) STR(s)     // Expand the macro in s, then stringify 


float y;
5int main(){
	
	uartInit();
	
	double x = 0.0;
	
		printf("\nFUNC(x) = %s\n ", XSTR(FUNC(x))  ); // Print the funtion . it id a damped cosine wavw whose amplitude decreses over 
																									// the epriod of tiem due to DF(x) 
	
		printf("\n %10s %25s\n", "x", STR(y = FUNC(x)) );  // Table header 
		printf("---------------------------------------------\n");
	
		for (; x < 2*PI + STEP/2; x += STEP )
		{
				y = FUNC(x);
				printf("%15f %20f \n", x, FUNC(x));
		}	
	
}
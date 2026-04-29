// Example 7_4
//The add() function computes the sum of the optional arguments.
// Arguments: The mandatory first argument indicates the number of
//						optional arguments. The optional arguments are
//						of type double.
// Return value: The sum, with type double.

#include "uart.h"
#include <stdarg.h>	//for va_list etc

double add( int n, ... );

int main(void){
	
	uartInit();
	
	double n1 = 1.1, n2 = 2.2, n3 = 3.3, n4 = 4.4;
	
		printf("%.1f + %.1f + %.1f + %.1f = %.1f\n",
						n1, n2, n3, n4, add( 4, n1, n2, n3, n4));
	
	while(1);
}

/*va_list argptr: This is a type that will be used to hold information about the variable
arguments. va_start(argptr, n): This macro initializes argptr to point to the first variable
argument after n. It prepares the va_list to retrieve the arguments passed to the function.
va_arg(argptr, double): This macro retrieves the next argument of the type double from the
argptr list. va_end(argptr): This macro is used to clean up after accessing the variable arguments */

double add( int n, ...)
{
	int i = 0;
	double sum = 0.0;
	va_list argptr;
	va_start( argptr, n);								// Initialize argptr;
	
	for( i = 0; i < n; ++i )						// that is, for each optional argument,
		sum += va_arg( argptr, double );	// read an argument with type double
																			// and accumulate in sum.
	va_end( argptr );
	return sum;
}
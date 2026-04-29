#include "uart.h"

long double factorial ( register unsigned int );

int main(){
	
	uartInit();
	
	printf("The factorial 5! = %.0Lf\n" ,factorial(5) );
	printf("The factorial 20! = %.0Lf\n" ,factorial(20) );
	
}

// factorial() calculTES n!, the factorial of a non-negative numbers n
// For n > 0, n! is the product of all intergrs from 1 to n inclusive 
// 0! equals 1
// Arguement: A whole number, with type unsigned int.
// Return value: The factorial of thr arguement, with type long double 

long double factorial ( register unsigned int n )
{
		long double f = 1;
	while ( n > 1 )
	{
		f *= n--;
	}
	
	return f;
	
}
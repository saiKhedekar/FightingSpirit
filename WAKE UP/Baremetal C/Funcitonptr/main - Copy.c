// Example 8_1 Function Pointers
// Array of 5 pointers to functions that take two double parameters and return a double;

// double (*funcTable[5])(double, double)
//					= { Add, Sub, Mul, Div, pow );			// Initializer list.

#include "uart.h"
#include <math.h>

double Add( double x, double y ) { return x + y; }
double Sub( double x, double y ) { return x - y; }
double Mul( double x, double y ) { return x * y; }
double Div( double x, double y ) { return x / y; }

typedef double func_t( double, double );		// The functions' type is
																						// now named func_t.
func_t *funcTable[5] = { Add, Sub, Mul, Div, pow };	//pow from Math.h

// An array of pointers to strings for output:
char *msgTable[5] = {"Sum", "Difference", "Product", "Quotient", "Power"};

int main(void){
	
	uartInit();
	
	int i;																		// An index variable.
		double x = 0, y = 0;
	
		printf( "Enter two operands for some arithmetic:\n" );
		 scanf( "%lf" , &x);
		 scanf( "%lf",	&y);
	
		for ( i = 0; i < 5; ++i )
			printf( "%10s: %6.2f\n", msgTable[i], funcTable[i](x, y) );
	
	while(1);
}

double maximum( int nrows, int ncols, double matrix[nrows][ncols] )
{
	double max = matrix[0][0];
	for ( int r = 0; r < nrows; ++r )
		for ( int c = 0; c < ncols; ++c )
			if ( max < matrix[r][c] )
				 max = matrix[r][c];
	return max;
}
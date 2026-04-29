#include "uart.h"

double maximum( int nrows, int ncols, double matrix[nrows][ncols] );

int main(void){
	
	uartInit();
	
	double dMatrix[][4] = { { 0.0 ,  7.7, -1.1,  3.3 },
													{ 1.1 , -4.4,  9.9, -3.3 },
													{ 2.2 ,  5.5, -8.8,  6.6 } };
	int nrows = sizeof(dMatrix)/sizeof(*dMatrix);
	
	for( int r = 0; r < nrows; ++r)
	{
		for ( int c = 0; c < 4; ++c )
			printf("%6.2f", dMatrix[r][c]);
		putchar('\n');
	}
	
	double max = maximum( nrows, 4, dMatrix);
	printf("\nThe greatest value: %.2f\n", max);
	
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
#include "uart.h"
#include <stdlib.h>
#include <stdio.h>

float x;
float *ptr = &x;
double average(const float*, int);

int main(){

	uartInit();
	
	float arr[] = {3.3F, 1.1F, 2.2F };
	int len = sizeof(arr) / sizeof(*arr);
	
	printf("Arithematic mean : %.2f\n", average( arr, len));
	
}

/* Using const in function parameters ensures that the functoin does not modify the passed variable */

double average( const float *array, int length)
{
		double sum = 0.0;
	const float *end = array + length ;    // Points one past the last element 
	
	if(length <= 0){											// the average of no elements is zero 
		return 0.0; 
	}
																										// accumulate the sum by walking a pointer through the array 
	for(const float *p = array; p < end ; p++)
	{
		sum += *p; 		// array[0] = 5;     // will generate the error if uncommmented as it is readonly			
	
	}	
			return (sum/length);	// The average of the element values 
}
#include "uart.h"
#include "stdio.h"
#include <float.h>

int main(void){

	uartInit();
	
	// Example 2-2 Illustrating the prescision of type float
	//precision.c
	
	puts("\nCharacteristics of the type float\n");
	
	printf("Storage size: %d bytes\n"
	"Smallest positive value: %E\n"    // %E floating point numbers in scientific notation 
	"Greatest positive value: %e\n"		//  %e floating point numbers in scientific notation 
	"Precision: %d decimal digits\n",sizeof(float) ,FLT_MIN, FLT_MAX, FLT_DIG);
	
	puts("\nAn exmaple of float precision: \n");
	double d_var = 12345.6;
	float f_var = (float)d_var;
	
	printf("The floating-point number    "
				"%18.10f\n", d_var);
	printf("has been stored in a variable\n"
					"of type float as the value   "
					"%18.10f\n",d_var - f_var);
					
	while(1){}
	

}
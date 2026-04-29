#include "uart.h"
#include <stdlib.h>
#include <stdio.h>

float f_var = 123.456789F;
long double ld_var;

unsigned long long ll_var; // same as uint64_t
unsigned long l_var; //same as uint32_t

float hpfC = 0xa.fp10 ; // (10 + 15/16) * 2^10 in decimal

int main(void){
 uartInit();
	
 ld_var = f_var * 987E7L; //scientific notation that represents 987*10^7, and the suffix L indicates its
 l_var = 4294967295lu; // change this to 4294967296lu and see the effect
 ll_var = 4294967296llu;
	
 printf("Long double Value: %Lf \n" , ld_var); //long double
 printf("Value: %f \n" , ld_var); //float
	
 printf("Long Integer Value: %lu \n" , l_var); // unsigned long integer
 printf("Long Long Integer Value: %llu \n" , ll_var); //unsigned long long integer
	
 printf("Hexadecimal Value in float: %f \n", hpfC); //float
	
	int a = 1;
	int b=2^-10;
	printf("%d",(a*b));
 while(1){
 }
	
}
#include "uart.h"
#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
#include <limits.h>


int main(void){
	uartInit();
	
	unsigned short n = -10;  // 65536 - 10 = 65526
	printf("Value of n is = %d, Size of short : %d\n",n ,sizeof(n));
	
	/*----------------------------------------------------------------*/
	
	double x = 0.5, y = 0.0;
	y=n*x;
	printf("value of y is =%lf,Size of y: %d\n",y,sizeof(y));
	/*----------------------------------------------------------------*/
	
	float _Complex f_z=2.0F+3.0F *I;
	double _Complex d_z=0.0;
	printf("Complex number : %.2f + %.2fi,size of float=%d\n",creal(f_z),cimag(f_z),sizeof(f_z));
	
	/*----------------------------------------------------------------*/
	
	d_z=f_z+x;
	printf("Complex number : %.2lf + %.2lfi,size of float=%d\n",creal(d_z),cimag(d_z),sizeof(d_z));
	
	/*----------------------------------------------------------------*/
	
	double z=2.9;
	unsigned long num=z;
	printf("Fractional part is lost :%ld \n",num); // Fractional part of z is lost 

unsigned long m= round(z);		// If z is non - negative, this has the same effect as m = z + 0.5;

printf("Rounding :%ld \n",m);

	/*----------------------------------------------------------------*/
	
	unsigned int i=0;
	float _Complex c=-1.7+2.0 *I;
	
	i=c;
	printf("The complex number when stored to unsigned int becomes : %d\n",i );
	
	/*------------------------------------------------------------------------*/
	/*+1 in binary is 0001 , ls cmplement is 1110, add 1 to obtain 2s complement i.e 1111 1111*/
	
	int j = UINT_MAX;   // Result: j = -1 (in two's complement representation )
	printf("The value of j : %d\n ",j);
	unsigned int k = UINT_MAX;
	printf("The value of k : %u\n",k);
}
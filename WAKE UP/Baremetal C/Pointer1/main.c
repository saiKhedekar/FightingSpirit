#include "uart.h"
#include <stdlib.h>
#include <stdio.h>

float x;
float *ptr = &x;

int main(){

	uartInit();
	*ptr = 1.7;
	
	float preResult = ++(*ptr);
	printf("%f , Pre result : %f\n",*ptr, preResult);
	
	float postResult = (*ptr)++;
	printf("%f, Post result: %f \n",*ptr , postResult);
	
	printf("Address of x is 0x%p and value of x is %f \n" ,&x ,x);
	printf("ptr contains the address of x which is : 0x%p\n",ptr);
	printf("Addresss of ptr is 0x%p . In this ,memory location 0x%p is stored \n",(void*)&ptr, ptr);
	
	
	printf("\n\n----------------------------------Using pointer to move in an arrray---------------------------------------------------");
	
	
	// Using a pointer to move through the elements in an array 
	
	
	double dArr[5]={0.0,1.1,2.3,3.3,4.4},
	*dPtr=dArr;

	int i = 0;               // an index varible
	dPtr=dPtr+1;						// Advance dptr to the second element 
	dPtr=2+dPtr;						// appends can be in either order
														// dPtr now points to dArr[3]
	printf(" %.1f\n",*dPtr);3
	printf("%.1f\n",*(dPtr-1));
2

	i=dPtr-dArr;

	printf(" %.d\n",i);
	printf("%d \n",0);

}
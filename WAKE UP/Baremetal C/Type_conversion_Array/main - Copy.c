#include "uart.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
	
	uartInit(); 
	int x =9;							// A  valid integer
	int *iPtr = &x;				// iPtr now points to the address of x
	
	printf("The initial value in *iPtr is %d \n",*iPtr); // Dereferencing iPtr sately now 
	printf("The Address of iPtr is %p \n\n",(void*)&iPtr); // prints the Address of the pointer variable 
	printf("The value in iPtr (address of x ) is %p \n ",(void *)iPtr);   // prints the address of varibale x
	printf("The address of x is %p \n",(void *)&x);            // prints the address of variable x 
	
	/* put a brkpoint below */
	
	int p = 2;
		printf("The address of p is %p \n",(void *)&p);   // prints the addresss of variable p
		*iPtr = p;																				// Now it safely assigns the value of p to the memory 
		printf("The new value in *iPtr is %d \n",*iPtr);  // should print 2
		printf("The address of x is %p \n",(void *)&x);
		printf("The address stored in iPtr(address of x) is %p \n",(void *)iPtr);   //Prints the address of varible
	
	
		int iArray[] = {0 , 10, 20}; // An array of int, inialized 
		int array_length = sizeof(iArray) / sizeof(int); // The number of elements: in this case, 3
		printf("The size of array is %d and size if int is %d. Hence length of array is %d\n",sizeof(iArray) ,sizeof(int) ,array_length);

		printf("The array starts at the address %p.\n",iArray);  // %p for pointer ]
		
		*iArray = 5; //Equivalent to iArray[0] = 5;
		iPtr = iArray + array_length - 1; // Point to the last elemeent of iArray: equivalent to iPtr = &iArray(arr)
		
		printf("The last element of the array is %d.\n",*iPtr)
		;
}
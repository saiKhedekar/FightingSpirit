#include "uart.h"
#include "stdio.h"
#include <limits.h>


int main(void){
		uartInit();
	// limits.c: Display the value ranges of char and int.
	
	printf("Storage sizes and value ranges of char and int \n\n");
	
	printf("The type char is %s.\n\n", CHAR_MIN < 0 ? "signed" : "unsigned");
	
	printf(" Type   size (in bytes)     Minimum        Maximum\n"
	       "---------------------------------------------------\n");
	
	printf(" char %8zu %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX ); // Z MODIFIED
	printf(" int  %8zu %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );
	
	char i;
	for(int i =0; i<=256; i++)
	{
		printf("%d.%c  ",i,i);
	}

	while(1){
	}
}
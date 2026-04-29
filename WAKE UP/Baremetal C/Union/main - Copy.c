/*All the members of a union begin at the same address in the memory. Here i , x and str all start at the
same address in memory e.g. 0x00.
In case of a structure if for e.g. i starts at 0x00 then x will be at 0x04 and str will begin at 0x0C and last element will be at 0x1B */

#include "uart.h"
#include <string.h>

union Data { int i; double x; char str[16]; };

union Data var, myData[100];
int main(void) {
	
	uartInit();
	
	printf("Size of var = %d\n Size of myData = %d \n", sizeof(var) , sizeof(myData));	//var is of type union Data.The size of var object
																																											// will be the size of the largest size number which
																																										 //is 16 bytes of the str array.
																																										 // size of myData is 16*100 =1600 bytes.
printf("/--------------------------------------------------------------------------------------------/\n");
	
	//illustrates, all the members of a union begin at the same address in the memory.
var.x = 3.21;
	printf("var.x  = %f\n" , var.x);
	
var.x += 0.5;
	printf("var.x  = %f\n" , var.x);
	
strcpy( var.str, "Tom and Jerry" );				// Occupies the place of var.x.
	printf("var.str  = %s \n" , var.str);
	printf("var.x  = %f\n" , var.x);				// value of var.x is now = 0 as that memory location is now occupied by Tom and Jerry
	
myData[0].i = 50;
	printf("value of myData[0].i = %d\n", myData[0].i);
for ( int i = 0; i < 50; ++i )
	{
		myData[i].i = 2 * i;
		printf("value of myData[i].i = %d\n" , myData[i].i);
	}
	
printf("/------------------------------------------------------------------------------------------/\n");
	
//intializing unions
	union Data  var1 = { 77 },
							var2 = { .str = "Mary" },
							var3 = var1,
							myData[100] = { {.x=0.5}, { 1 }, var2 , 3 };
	printf("var1 = %d\n", var1.i);
							
	printf("var2 = %s\n", var2.str);
							
	printf("var3 = %d\n", var3.i);
	
	printf("value of myData[0].x = %f\n" , myData[0].x);
	printf("value of myData[1].i = %d\n" , myData[1].i);
	printf("value of myData[2].str = %s\n" , myData[2].str);
							
	
	for ( int i = 3; i < 100; ++i )
		printf("value of myData[i].i = %d\n" , myData[i].i);
							
	while(1);
}
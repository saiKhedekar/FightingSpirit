#include "uart.h"


int main(){
	
	uartInit();
	
	double x = 0.0, sum = 0.0;
	int count = 0;
	
	printf("\t---- Calculate Averages ----\n");
	printf("\nEnter some numbers: \n");
	printf("(Type a letter to end your input)\n ");
	
	while ( scanf( "%lf", &x) == 1)
	{
		sum += x;
		++count;
	
	}
	
	if( count == 0 )
	{
		printf("No inputs data!!\n");
	}
	else
	{
		printf("\n The average of your numbers is %.2f\n", sum/count);
	}
}
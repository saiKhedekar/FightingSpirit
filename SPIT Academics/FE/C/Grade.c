#include <stdio.h>
int main()
{
     int a;
     printf("Enter your marks: ");
	scanf("%d",&a);
	
	if(a>100 || a<0)
	{
		printf("Invalid marks\n");
	}
	
	else if(a<=100 && a>=91)
	{
	     printf("A+ Grade\n");
	}
	
	else	if(a<=90 && a>=81)
	{
		printf("A Grade\n");
	}
	
	else	if(a<=80 && a>=71)
	{
		printf("B Grade\n");
	}
	
	else	if(a<=70 && a>=61)
	{
		printf("C Grade\n");
	}
	
	else	if(a<=60 && a>=51)
	{
		printf("D Grade\n");
	}
	
	else 
	{
		printf("Failed\n");
	}


return 0;
}

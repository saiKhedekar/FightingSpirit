#include <stdio.h>
int fibo(int n)
{
	if(n ==0 )
	{
		return 0;
	}

	else if (n == 1 )
	{
		return 1;
	}
	
	else
	{
		return fibo(n-1) + fibo(n-2);
	}
}

int main()
{
	int a;
  	printf("Enter n : ");
  	scanf("%d",&a); 
  	
     printf("The fibonacci series of %d numbers is \n",a);

	for(int i = 0; i<=a ; i++)
	{
		int result = fibo(i);
		printf("%d ",result );
	}
	printf("\n");
return 0;
}

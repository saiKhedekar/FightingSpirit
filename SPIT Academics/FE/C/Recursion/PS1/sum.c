#include <stdio.h>
int sum(int n)
{
	if( n == 0)
	{
		return 0;
	}
	
	else
	{
		return n%10 + sum(n/10);
	}

}
int main()
{
  int a;
  printf("Enter a number : ");
  scanf("%d",&a);
  
	int result = sum(a);
	printf("The sum of digits of %d is %d\n",a,result);
	
return 0;
}

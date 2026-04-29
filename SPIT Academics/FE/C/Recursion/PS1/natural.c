#include <stdio.h>
int natural(int n)
{
	if( n == 1)
	{
		return 1;
	}
	
	else
	{
		return n + natural(n-1);
	}

}
int main()
{
  int a;
  printf("Enter n : ");
  scanf("%d",&a); 
  
	int result = natural(a);
	printf("The sum of first %d natural numbers is %d\n",a,result);
	
return 0;
}

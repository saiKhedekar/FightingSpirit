#include <stdio.h>
int fact(int n)
{
  if(n<=1)
  {
  	return 1;
  }
  else
  {
  	return n*fact(n-1);
  }

}


int main()
{

  int a;
  printf("Enter n : ");
  scanf("%d",&a);
  
  int result = fact(a);
  printf("The factorial of %d is %d\n",a,result);

return 0;
}

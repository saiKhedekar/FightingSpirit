#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter the First number: ");
  scanf("%d",&a);
  
  printf("Enter the Second number: ");
  scanf("%d",&b);
  
  int temp;
  temp = b;
  b = a;
  a = temp;
  
  printf("After swapping the result is as follow: \n");
  printf("a = %d",a);
  printf("\nb = %d",b);
  printf("\n");
  return 0;
}


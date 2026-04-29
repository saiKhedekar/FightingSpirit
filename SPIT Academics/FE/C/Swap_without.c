#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter the First number: ");
  scanf("%d",&a);
  
  printf("Enter the Second number: ");
  scanf("%d",&b);

  a = a+b;
  b = a-b;
  a = a-b;
  
  printf("After swapping the following is the result: \n");
  printf("a = %d",a);
  printf("\nb = %d",b);
  printf("\n");
  
  


return 0;
}

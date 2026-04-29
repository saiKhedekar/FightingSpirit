#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter the first number: ");
  scanf("%d",&a);
  
    printf("Enter the second number: ");
    scanf("%d",&b);
    
  int add,sub,multi,div,mod;
  
  add = a + b;
  sub = a - b;
  multi = a * b;
  div = a / b;
  mod = a % b;
  
  
 	printf("Addition = %d",add);
 	printf("\nSubtraction = %d",sub);
 	printf("\nMultiplication = %d",multi);
 	printf("\nDivision = %d",div);
 	printf("\nRemainder = %d",mod);
 	printf("\n");

return 0;
}

#include <stdio.h>
int main()
{
   int a,b,num1,num2;
   printf("Enter the first number: ");
   scanf("%d",&a);
   printf("Enter the second number: ");
   scanf("%d",&b);
   
   num1 = a;
   num2 = b;
   
   int remainder,lcm,gcd;

   while(b!=0)
   {
   remainder = a%b;
   a = b;
   b = remainder;
   gcd = a;
   }
   
   lcm = (num1*num2)/gcd;

   printf("Value of GCD: %d",gcd);
   printf("\nValue of LCM: %d",lcm);
   printf("\n");

return 0;
}

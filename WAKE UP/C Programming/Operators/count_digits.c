#include <stdio.h>
int main()
{
   int a,count;
   printf("Enter a number: ");
   scanf("%d",&a);

   while (a!=0)
   {
         a = a/10;
        count++;

   }

   printf("The total number of digits is: %d",count);

    return 0;
}
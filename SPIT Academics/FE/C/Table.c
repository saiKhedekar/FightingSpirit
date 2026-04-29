#include <stdio.h>
int main()
{
 int a;
 printf("Enter a number: ");
 scanf("%d",&a);

	for(int i=1;i<=12;i++)
       {
         int b = a*i;
         printf("%d x %d = %d\n",a,i,b);
         
       } 

return 0;
}

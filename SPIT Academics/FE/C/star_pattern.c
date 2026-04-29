#include <stdio.h>
int main()
{
 int a;
 
 printf("Enter no of rows: ");
 scanf("%d",&a);
 
 
 for(int i=1;i<=a;i++)
 {

  printf("\n"); 
      
    for(int m=1;m<=i;m++)
    {
    		printf("*");
    }
  
 }

return 0;
}

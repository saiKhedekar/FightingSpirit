#include <stdio.h>
int prime(int a);
int main()
{
 int n;
 printf("Enter value of n:");
 scanf("%d",&n);
 prime(n);
 return 0;
 }
 
 int prime(int a)
 {
 for(int i=2;i<=a;i++)
 {
   if(i%2==0)
   {
   printf("_");
   
   }
   
   else
   {
   printf("%d",i);
   }
 
 
 
 
 }
 

 return 0;
 }



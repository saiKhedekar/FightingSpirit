#include <stdio.h>
int main()
{
   int num[100];
   for(int i=1;i<=100;i++)
   {
     num[i-1] = i;
    
   } // declare 1 to 100

   for(int i=2;i<100;i++) // cancelling non prime numbers
   {
	if(num[i]!=0)
	{
		for(int j=i*i;j<100;j+=3)
		{
		     num[j] = 0;
		
		}
	}

   }
 
   printf("The prime numbers are as follows: \n");
 for(int m=1;m<100;m++)  // Printing prime numbers
 {
     if(num[m]!=0)
     {
 	  printf("%d  ",num[m]);
     }
 } 
 
   printf("\n");  
return 0;
}

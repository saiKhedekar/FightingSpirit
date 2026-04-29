#include <stdio.h>
int main()
{
   int num[10];
   int even[5];
   int odd[5];
   printf("Enter a 10 numbers: \n");
   for(int i=1;i<=10;i++) 
   {
     scanf("%d",&num[i-1]);    // Taking input 
   }
   
   printf("Printing input array: \n");
   
   for(int i=0;i<10;i++)
   {
       printf("%d  ",num[i]);
    
   }
   
   
   int a = 0;
   int b = 0;
   for(int i=0;i<10;i++)         //Separating even and odd 
   {
   	  if( num[i] %2 == 0 )
        {
           even[a] = num[i];
           a++;
        	  
        }
       else
       {
          odd[b] = num[i];
          b++;
       }
      
   }
   
 printf("\nEven numbers: ");
 
     for(int i=0;i<5;i++)       // Printing even numbers 
   {   
      printf("%d  ",even[i]);

   }
   
    printf("\nOdd numbers: ");
    
   for(int i=0;i<5;i++)    // Priting odd numbers 
   {
   
   printf("%d  ",odd[i]);
 
   }
   printf("\n");
return 0;
}

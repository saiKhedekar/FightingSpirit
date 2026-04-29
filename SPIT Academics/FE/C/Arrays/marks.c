#include <stdio.h>
int main()
{
   int mark[10];
   printf("Enter marks of 10 subjects: \n");
   
   for(int i = 0; i < 10; i++) 
   {
     scanf("%d",&mark[i]);    // Taking input 
   }
   
   printf("Printing input array: \n");
   
   for(int i=0;i<10;i++)
   {
       printf("%d  ",mark[i]);
    
   }
   
   int high = 0;
   for(int i = 0; i < 10; i++)
   {
       if( mark[i] > high )
       {
           high = mark[i];
       }

   }
   
   printf("\nHighest marks = %d\n",high);
   
    int low = 1000000000;
   for(int i = 0; i < 10; i++)
   {
       if( mark[i] < low )
       {
           low = mark[i];
       }

   }
   
   printf("Lowest marks = %d\n",low);
   
   
   int avg = 0;                  // Average marks 
   for(int i = 0; i < 10; i++)
   {
       avg = avg + mark[i];
   }   
   printf("Average of marks: %d",avg/10);
   printf("\n");
return 0;
}

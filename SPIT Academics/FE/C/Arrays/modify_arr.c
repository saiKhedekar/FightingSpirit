#include <stdio.h>
int modify(int arr[10]);
int main()
{
  int arr[10]; 
 
    printf("Enter a 10 numbers: \n");
   for(int i=1;i<=10;i++) 
   {
     scanf("%d",&arr[i-1]);    // Taking input 
   }
   
   printf("Printing input array: \n");
   
   for(int i=0;i<10;i++)
   {
       printf("%d  ",arr[i]);
    
   }
  modify(arr );   // FUNCTION CALLING 
  printf("\nThe modified array is as follows: \n");
  for(int i=0;i<=9;i++)
  {
  
  printf("%d  ",arr[i]); 
  
  }
  printf("\n");
return 0;
}

int modify(int arr[10])
{

  
  for(int i = 0;i<=9;i++)
  {
    arr[i] = arr[i]*3;
      
  }

return 0;
}

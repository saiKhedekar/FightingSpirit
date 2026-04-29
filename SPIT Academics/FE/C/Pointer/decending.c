
#include <stdio.h>
int main() 
{
    int arr[10];
    for(int i=0;i<=9;i++)
    {
       printf("Enter element %d :",i+1);
       scanf("%d",(arr + i));
    }
        
    
    printf("Input array is :-\n");
    for(int i=0;i<=9;i++)
    {
       printf("%d ",*(arr+i));
    }
    
   int n = 10;
   int minindex;
   for(int i=0;i<n-1;i++)
   {    
      minindex = i;     
        for(int j=i+1;j<n;j++)
        {
           if(*(arr+j)<*(arr+minindex))
           {
               minindex = j;
           }
        }  
     int temp = *(arr+minindex);
     *(arr+minindex) = *(arr+i);
     *(arr+i) = temp;
    
   }
   printf("\n");
     printf("The array in decsending order is :\n");
      for(int i = 9;i>=0;i--)
   { 
      printf("%d ",*(arr+i));
   }
   
  printf("\n");
    return 0;
    
    }

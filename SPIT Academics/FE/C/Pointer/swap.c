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
    
    
    int min = *(arr + 0);
    int minindex = 0;
    int max = *(arr + 0);
    int maxindex = 0;
    
    for(int i = 0;i<=9;i++)
    {
      if(*(arr+i) < min)
      {
      	min = *(arr+i);
          minindex = i;
      }
    
    }
    
    for(int j = 0;j<=9;j++)
   {
      if(*(arr+j) > max)
      {
          max  = *(arr+j);
          maxindex = j;
      }
    
    }
    
    int temp = *(arr + maxindex);
    *(arr + maxindex) = *(arr + minindex);
    *(arr + minindex) = temp;
    
    
    printf("\nSwapped array is :-\n");
    for(int i=0;i<=9;i++)
    {
       printf("%d ",*(arr+i));
    }

    printf("\n");
 return 0;
 }

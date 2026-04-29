#include <stdio.h> 
int selectionsort(int num[15]);
int bubblesort(int num[15]);
int main()
{   
   int num[15];
   printf("Enter 15 elements for array: \n");
   
   for(int i = 0;i<15;i++)
   { 
      scanf("%d",&num[i]);
   }
  
   printf("Printing input array: \n");
   for(int i = 0;i<15;i++)
   { 
      printf("%d ",num[i]);
   }
   
   printf("\n");
   
   selectionsort(num);
   bubblesort(num);
  printf("\n");
return 0;
}

int selectionsort(int num[15])
{   
   int n = 15;
   int minindex;
   for(int i=0;i<n-1;i++)
   {    
      minindex = i;     
        for(int j=i+1;j<n;j++)
        {
           if(num[j]<num[minindex])
           {
               minindex = j;
           }
        }  
     int temp = num[minindex];
     num[minindex] = num[i];
     num[i] = temp;
    
   }
   printf("Printing Selection sort output: \n");
      for(int i = 0;i<15;i++)
   { 
      printf("%d ",num[i]);
   }
   
 return 0;
}

int bubblesort(int num[15])
{
   int n = 15;
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-i-1;j++)
      {
        if(num[j]>num[j+1])
        {
            int temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
     
      }
    }
    printf("\nPrinting Bubble sort output: \n");  

   for(int i = 0;i<15;i++)
   { 
      printf("%d ",num[i]);
   }
   
return 0;

}

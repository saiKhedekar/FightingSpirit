#include <stdio.h>
int main() 
{
    int arr[3][3];
    int arr1[3][3];
    int result[3][3] = {0};
    printf("Enter input for matrix 1\n");
    
    for(int i=0;i<=2;i++)
    {  
        for(int j=0;j<=2;j++)
        {
          printf("Enter element [%d][%d] :",i ,j);
          scanf("%d", (*(arr + i) + j));
        }
    } 
     printf("\nInput of 1st Matrix\n");
    
    for(int i=0;i<=2;i++)
    {  
        for(int j=0;j<=2;j++)
        {
          printf(" %d",*(*(arr + i) + j));

        }
        printf("\n");
    } 
    
    
    
    printf("\nEnter input for matrix 2\n");
    
    for(int i=0;i<=2;i++)
    {  
        for(int j=0;j<=2;j++)
        {
          printf("Enter element [%d][%d] :",i ,j);
          scanf("%d", (*(arr1 + i) + j));
        }
    } 
    
     printf("\nInput of 2nd Matrix\n");
    
    for(int i=0;i<=2;i++)
    {  
        for(int j=0;j<=2;j++)
        {
          printf(" %d",*(*(arr1 + i) + j));

        }
        printf("\n");
    }
  
  
   for(int i=0; i<=2; i++)
   {
   	for(int j=0; j<=2; j++)
   	{
   		for(int k = 0; k<=2 ;k++)
   		{
		  *(*(result+i)+j) += (*(*(arr + i) + k)) * (*(*(arr1 + k) + j));
   		}
	} 
   	}


  
  
    printf("\n Output of multiplication of two matrix is :-\n");
    for(int i=0;i<=2;i++)
    {  
        for(int j=0;j<=2;j++)
        {
          printf(" %d",*(*(result + i) + j));

        }
        printf("\n");
    } 
    
 return 0;
 }

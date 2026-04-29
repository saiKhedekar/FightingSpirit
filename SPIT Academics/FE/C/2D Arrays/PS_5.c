
#include<stdio.h>
int isSymmetric(int arr[3][3]);
void large(int arr[3][3]);
void sumdia(int arr[3][3]);
void main()
{
  int arr[3][3],i,j,sum=0;
  printf("Enter the elements of 3x3 matrix:\n");  //INPUT OF MATRIX
    
  for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
      printf("Enter [%d][%d] : ",i+1,j+1);
      scanf("%d",&arr[i][j]);
     }
 
 }
 
large(arr);
sumdia(arr);


  if(isSymmetric(arr))
  {
     printf("\nThe matrix is symmetric\n");
  }
  else
  {
     printf("\nThe matrix is unsymmetric\n");
  }
  
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {  
      sum+=arr[i][j];
      }
      
  printf("\nThe sum of elements of row %d is : %d",i+1,sum);
  sum=0;
  }
}


int isSymmetric(int arr[3][3])   // CHECKING SYMMETRIC 
{
    for (int i=0; i<3; i++) 
    {
        for (int j=0; j<3; j++) 
        {
            if (arr[i][j] != arr[j][i]) 
            {
                return 0;
            }
        }
    }
    return 1;
}



void sumdia(int arr[3][3])
{
    int i,j,sumdi=0;
    for(i=0;i<3;i++)
    {
        sumdi += arr[i][i];
    }
    
 printf("\nThe sum of the diagonal elemnts of the matrix is: %d",sumdi);

}



void large(int arr[3][3])
{
    int i,j,k=0,temp[3*3],lar;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             {
                temp[k++]=arr[i][j];
              }
        }
        
 lar=temp[0];
 
 for(i=0;i<k;i++)
   {
       if(temp[i]>lar)
         {
            lar=temp[i];
         }
   }
   
printf("\nThe largest element in the matrix is: %d",lar); 
}

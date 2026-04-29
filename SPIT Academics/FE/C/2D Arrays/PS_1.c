#include<stdio.h>
void main(){

int r1,c1,r2,c2;

  printf("Enter rows in matrix 1: ");
  scanf("%d",&r1);
  
  printf("Enter columns in matrix 1: ");
  scanf("%d",&c1);  

  printf("Enter rows in matrix 2: ");
  scanf("%d",&r2);

  printf("Enter columns in matrix 2: ");
  scanf("%d",&c2);
  
if(c1==r2)
{

int a[r1][c1], b[r2][c2], result[r1][c2];
int i,j,k;

   for(i=0;i<r1;i++)
   {
        for(j=0;j<c1;j++)
        {
           printf("Enter [%d][%d] : ",i+1,j+1);
           scanf("%d",&a[i][j]);
        }
    }
    
printf("\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter [%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

printf("\n");

   for(i=0;i<r1;i++)
   {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
             for(k=0;k<c1;k++)
              {
                result[i][j]+=a[i][k]*b[k][j]; 
                  
              }
        }
    }

printf("Matrix 'A' is \n");


   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
        printf("%d ",a[i][j]);
      }
printf("\n");
} 


printf("\nMatrix 'B' is \n");


 for(i=0;i<r2;i++)
 {
    for(j=0;j<c2;j++)
    {
        printf("%d ",b[i][j]);
    }
   printf("\n");
 }

printf("\n");

printf("Printing result matrix \n");

  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
     printf("%d ",result[i][j]);
    } 
  printf("\n");
 }

}

 else
 {
  printf("The given matrix cannot be multiplied\n");
 }
}

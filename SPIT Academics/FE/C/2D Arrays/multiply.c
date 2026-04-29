#include <stdio.h>
int main()
{
  int m,n;
  printf("Enter no of rows for matrix : ");
  scanf("%d",&m);
  
  printf("Enter the no of columns for matrix : ");
  scanf("%d",&n);
  
 /* printf("Enter no of rows for matrix 2: ");
  scanf("%d",&p);
  
  printf("Enter the no of columns for matrix 2: ");
  scanf("%d",&q);
  
  if( n != p )
  {
  	printf("\nThe given matrix is not eligible for multiplication\n");
  }*/
 

   
  int mat1[m][n];
  int mat2[m][n];
  int result[m][n];

  
  printf("Enter values for matrix 1\n");    // INPUT FOR MATRIX 1
  for(int i = 0; i<m; i++)
  {
  	for(int j = 0; j<n; j++)
  	{
  		printf("Enter [%d][%d] = ",i,j);
  		scanf("%d",&mat1[i][j]);
  	}
  
  }
  
  printf("Enter values for matrix 2\n");    // INPUT FOR MATRIX 2
  for(int i = 0; i<m; i++)
  {
  	for(int j = 0; j<n; j++)
  	{
  		printf("Enter [%d][%d] = ",i,j);
  		scanf("%d",&mat2[i][j]);
  	}
  
  }
  
  printf("\nPrinting matrix 1 \n");
  for(int i = 0; i<m; i++)         // 	PRINTING MATRIX 1
  {
  	for(int j = 0; j<n; j++)
  	{
  		printf("%d ",mat1[i][j]);
  	}
     printf("\n");
  }
  
  printf("\nPrinting matrix 2 \n");
  for(int i = 0; i<m; i++)         // 	PRINTING MATRIX 2
  {
  	for(int j = 0; j<n; j++)
  	{
  		printf("%d ",mat2[i][j]);
  	}
     printf("\n");
  }
  
  
   for(int i=0; i<m; i++)
   {
   	for(int j=0; j<=n; j++)
   	{
   		for(int k = 0; k<m ;k++)
   		{
			result[i][j] = mat1[i][j]*mat2[][]
		} 
   	}
   }
  
 
 return 0;
 }

#include <stdio.h>
int main()
{
  int m,n;
  printf("Enter no of rows for matrix: ");
  scanf("%d",&m);
  
  printf("Enter the no of columns for matrix: ");
  scanf("%d",&n);
  
  int mat1[m][n];
  int mat2[m][n];
  int add[m][n];
  
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
 
 
 for(int i = 0; i<m; i++)          // ADDING BOTH MATRIX
 {
 	for(int j = 0; j<n; j++)
 	{
 	   add[i][j] = mat1[i][j] + mat2[i][j];
 	}
 
 }


  printf("\nPrinting result matrix \n");
  for(int i = 0; i<m; i++)         // 	PRINTING RESULT MATRIX
  {
  	for(int j = 0; j<n; j++)
  	{
  		printf("%d ",add[i][j]);
  	}
     printf("\n");
  }


return 0;
}

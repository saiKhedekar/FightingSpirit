#include <stdio.h>
int subtract();
int sort();
int main()
{  
  int m;
  printf("Choose task : ");
  scanf("%d",&m);
  
  switch(m)
  {
  
   case 1:
   subtract();
   break;
   
   case 2:
   sort();
   break;
   
   default:
   printf("INVALID INPUT \n");
   
  }
  
  
return 0;
}


int subtract()
{
  int mat1[4][4];
  int mat2[4][4];
  int sub[4][4];
  
  printf("Enter values for matrix 1\n");    // INPUT FOR MATRIX 1
  for(int i = 0; i<4; i++)
  {
  	for(int j = 0; j<4; j++)
  	{
  		printf("Enter [%d][%d] = ",i,j);
  		scanf("%d",&mat1[i][j]);
  	}
  
  }
  
 
  printf("Enter values for matrix 2\n");    // INPUT FOR MATRIX 2
  for(int i = 0; i<4; i++)
  {
  	for(int j = 0; j<4; j++)
  	{
  		printf("Enter [%d][%d] = ",i,j);
  		scanf("%d",&mat2[i][j]);
  	}
  
  } 
  
  printf("\nPrinting matrix 1 :\n");
  for(int i = 0; i<4; i++)
  {
  	for(int j = 0; j<4; j++)
  	{
  	   printf("%d",mat1[i][j]);
  	}
  	printf("\n");
}

  printf("\nPrinting matrix 2 :\n");
  for(int i = 0; i<4; i++)
  {
  	for(int j = 0; j<4; j++)
  	{
  	   printf("%d",mat2[i][j]);
  	}
  	printf("\n");
}

 for(int i = 0; i<4; i++)          // SUBTRACTING BOTH MATRIX
 {
 	for(int j = 0; j<4; j++)
 	{
 	   sub[i][j] = mat1[i][j] - mat2[i][j];
 	}
 
 }


  printf("\nPrinting result matrix \n");
  for(int i = 0; i<4; i++)         // 	PRINTING RESULT MATRIX
  {
  	for(int j = 0; j<4; j++)
  	{
  		printf("%d ",sub[i][j]);
  	}
     printf("\n");
  }


return 0;
}


int sort()
{
  int mat1[4][4];
  
  printf("Enter values for matrix 1\n");    // INPUT FOR MATRIX 1
  for(int i = 0; i<4; i++)
  {
  	for(int j = 0; j<4; j++)
  	{
  		printf("Enter [%d][%d] = ",i,j);
  		scanf("%d",&mat1[i][j]);
  	}
  
  }
  
 
 
 
 
 
 
 
 
 
return 0;
}

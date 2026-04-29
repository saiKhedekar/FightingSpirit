
#include<stdio.h>
void sub();
void sort();
void main()
{
 int n;
 printf("Enter the subsequent number besides the operation you want to perform:\n ");
 printf("1.Subtract two 4x4 Matrix\n 2.Sort all the elements in a 4x4 matrix\n\n Enter required task: ");
 scanf("%d",&n);
 
   switch(n)
   {
      
    case 1:sub();
       break;
       
    case 2:sort();
       break;
       
     default:
     printf("Invalid input");
   }
}


void sub()
{
 int arr1[4][4],arr2[4][4],i,j,res[4][4];
 printf("Enter the elements of the first 4x4 Matrix:\n");
      
     for(i=0;i<4;i++)
	 {
	     for(j=0;j<4;j++)
	     {
	        printf("Enter [%d][%d] : ",i+1,j+1);
	        scanf("%d",&arr1[i][j]);
         }
  	}
  	
 	printf("Enter the elements of the second 4x4 Matrix:\n");
 	
    for(i=0;i<4;i++)
    {
	    for(j=0;j<4;j++)
	    {
	      printf("Enter [%d][%d] : ",i+1,j+1);
	      scanf("%d",&arr2[i][j]);
        }
  	}
  	
	printf("The result matrix elements are:\n");
	
    for(i=0;i<4;i++)
        {
	      for(j=0;j<4;j++)
	      {
	          res[i][j]=arr1[i][j]-arr2[i][j];
	          printf("%d ",res[i][j]);	
	      }
	   printf("\n");
    	}
}


void sort()
{
 int arr[4][4],i,j,temp[4*4],k=0;
 printf("\nEnter the elements of the 4x4 Matrix:\n");

    for(i=0;i<4;i++)
    { 
       for(j=0;j<4;j++)
        { 
          printf("Enter [%d][%d] : ",i+1,j+1);
          scanf("%d",&arr[i][j]);
        }
    }
    
printf("\nMatrix elements before sorting:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
    
    
    for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
       {
           temp[k++]=arr[i][j];
       }
    }
    
   for(i=0;i<4*4-1;i++)
   {
       for(j=i+1;j<4*4;j++)
        {
           if(temp[i]>temp[j])
            {
               int tempval=temp[i];
                temp[i]=temp[j];
                temp[j]=tempval;
            }
        }
    }
    
k=0;

  for(i=0;i<4;i++)
   {
      for(j=0;j<4;j++)
        {
          arr[i][j]=temp[k++];
        }
    }
    
printf("\nMatrix elements after sorting:\n");

for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
     {
        printf("%d ",arr[i][j]);
     }
    printf("\n");
  }
}



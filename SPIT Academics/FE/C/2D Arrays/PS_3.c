#include<stdio.h>
void main()
{
int a[3][3];
 printf("To find the determinant of a matrix \nEnter the following values \n");
 for(int i=0;i<3;i++)
   {
        for(int j=0;j<3;j++)
        {
           printf("Enter [%d][%d] : ",i+1,j+1);
           scanf("%d",&a[i][j]);
        }
    }
    
printf("\n");

int result=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]) ;

printf("Printing input array \n");

  for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
         {
            printf("%d ",a[i][j]);
         }
printf("\n");
}

printf("\nDeterminant of the given matrix is %d\n",result);

}


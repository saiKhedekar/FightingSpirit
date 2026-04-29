#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("The input number is %d",x);
    printf("\n");
    
    if (x/2==0)
        {
           printf("The number is even");
        
        }
    else
        {
            printf("The number is odd");
            
        }
    
       return 0;
}
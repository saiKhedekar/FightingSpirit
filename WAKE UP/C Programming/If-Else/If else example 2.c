#include <stdio.h>
int main()
{
    int x;
    printf("To check whether the number is divisible by 5 or not\nEnter a number: ");
    scanf("%d",&x);
    
    
    if(x%5==0)
        {
            printf("It is divisible");
            
        }
    
    else
        {
            printf("It is NOT divisible");
    
        }
    
    return 0;
}
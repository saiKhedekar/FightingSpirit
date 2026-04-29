#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    if(x%5==0)
    {
        if(x%3==0)
        {
            printf("The number is divisible by both 5 and 3");
        }
            else
        {
            printf("NOT divisible");
        }
    
    }
        else
    {
        printf("NOT divisible");
    }
    

    return 0;
}
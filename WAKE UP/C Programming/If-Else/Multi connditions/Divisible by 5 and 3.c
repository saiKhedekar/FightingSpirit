#include <stdio.h>
int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);
    
    if(x%5==0 && x%3==0)
    {
        printf("It is divisible by 5 and 3");
    }
    else
    {
        printf("It is NOT divisible by 5 and 3");   
    }
    
    
    return 0;
}
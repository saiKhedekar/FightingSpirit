#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    
    if(x>=100 && x<=999)
    {
        printf("It is a three digit number");
    }
    
    else
    {
        printf("It is NOT a three digit number");
    }
    
    
    return 0;
}
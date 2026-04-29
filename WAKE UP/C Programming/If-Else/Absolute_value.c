#include <stdio.h>
int main()
{
    int num;
    printf("Enter a integer: ");
    scanf("%d",&num);
    
    if(num>=0)
    {
        printf("Absolute value is %d",num);
        
    }
    
    else
    {
        int x = num;
        x = num*-1;
        printf("The absolute value is %d",x);
        
    }
    
    return 0;
}
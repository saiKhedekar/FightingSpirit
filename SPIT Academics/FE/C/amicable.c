#include <stdio.h>
int factor(int n);
int main()
{
    int a,b;
    printf("To check whether a given number is amicable or not: \n");
    printf("Enter num1: ");
    scanf("%d",&a);
    
    printf("Enter num2: ");
    scanf("%d",&b);
    
    int sol1,sol2;
    sol1 = factor(a);
    sol2 = factor(b);
    
    if( sol1 == b && sol2 == a )
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    printf("\n");
return 0;
}

int factor(int n)
{
    int sum = 0;
    
    for(int i = 1; i<=n/2 ; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    
return sum;
}

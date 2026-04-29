#include <stdio.h>
int factorial(int num);
int main()
{
    int n;
    int sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) 
    {
        sum = sum + factorial(i) / i;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}


int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
    {
        fact = fact * i;
    }
    return fact;
}
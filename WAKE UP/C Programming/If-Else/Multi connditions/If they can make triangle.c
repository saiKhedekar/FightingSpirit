#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter length of side 'a': ");
    scanf("%d",&a);
    printf("Enter length of side 'b': ");
    scanf("%d",&b);
    printf("Enter length of side 'c': ");
    scanf("%d",&c);
    
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("They can make a triangle");
    }
    else
    {
        printf("It cannot make a triangle");   
    }
    return 0;
}
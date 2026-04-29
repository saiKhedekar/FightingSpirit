#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a integer 'x': ");
    scanf("%d",&x);
    printf("Enter a integer 'y': ");
    scanf("%d",&y);
    printf("Enter a integer 'z': ");
    scanf("%d",&z);
    
    if (x>y && x>z)
    {
        printf("X is the greatest number");
    }
    if (y>x && y>z)
    {
        printf("Y is the greatest number");   
    }
    if (z>x && z>y)
    {
        printf("Z is the greatest number");
    }    
    
    
    return 0;
}
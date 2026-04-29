#include <stdio.h>
int main()
{
    float radius;
    printf("To Calculate area of a circle \nEnter radius: ");
    scanf("%f",&radius);
    float area = 3.142*radius*radius;
    printf("The Area of the circle is %f",area);
    
    return 0;
}
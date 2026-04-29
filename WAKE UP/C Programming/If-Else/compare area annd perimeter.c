#include <stdio.h>
int main()
{
    float x,y;  //x = length  y = breadth
    
    printf("Enter length of rectangle: ");
    scanf("%f",&x);
    
    printf("Enter breadth of rectangle: ");
    scanf("%f",&y);
     
    float area,peri;
    area = x*y;
    peri = 2*(x+y);
    printf("Area is %f",area);
    printf("\nPerimeter is %f",peri);
        
    if(area>peri) 
    {
        printf("\nThe area greater than perimeter");
    }
    
    else
    {
        printf("The perimeter is greater than area");
    }
    
    return 0;
}
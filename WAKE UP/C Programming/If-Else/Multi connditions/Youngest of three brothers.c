#include <stdio.h>
int main()
{
    int x,y,z;                          //X=RAM  Y=SHYAM Z=AJAY
    printf("Enter age of Ram: ");
    scanf("%d",&x);
    printf("Enter age of Shyam: ");
    scanf("%d",&y);
    printf("Enter age of Ajay: ");
    scanf("%d",&z);
    
    if(x<y && x<z)
    {
        printf("Ram is the youngest");
    }
    
    if(y<z && y<x)
    {
        printf("Shyam is the youngest");
    }
    
    if(z<x && z<y)
    {
        printf("Ajay is the youngest");
    }
    
    
 return 0;   
}
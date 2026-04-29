#include <stdio.h>
int main()
{
    for(int i=1;i<=100;i++) // OR i<=100
    {
        if(i%2!=0)          // OR (i%2!=0) ? printf("%d ",i) :printf(" ");
        {
            printf("%d ",i); 
            
        }
        
    }

    return 0;   
}
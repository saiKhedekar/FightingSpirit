#include <stdio.h>
int main()
{
    int a[5];
    int b[5];
    printf("Enter the elements of array : \n");
    for(int i=0; i<=4; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Printing the input array: \n");
    for(int i =0; i<=4; i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0; i<=4; i++)
    {
        b[i] = a[4-i];
    }
    
    printf("\nPrinting the dulicated and reversed array: \n");
    for(int i=0; i<=4; i++)
    {
        printf("%d ",b[i]);
    }
    return  0;
}
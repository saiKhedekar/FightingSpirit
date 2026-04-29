
#include <stdio.h>
int main() 
{
    int arr[10];
    for(int i=0;i<=9;i++)
    {
       printf("Enter element %d :",i+1);
       scanf("%d",(arr + i));
    }
        
    
    printf("Input array is :-\n");
    for(int i=0;i<=9;i++)
    {
       printf("%d ",*(arr+i));
    }
    
    int key;
    printf("\nEnter Key: ");
    scanf("%d",&key);
    
    int ans,index;
        for (int i = 0; i <=9; i++) 
    {
        if (*(arr+i) == key) 
        {
            ans = 1;
            index = i;
            break;
        }
        else
        {
        	 ans = 0;
        }
    }
    
    if (ans == 0)
    {
        printf("Key Not Found\n");
    }
    else
    {
        printf("Key Found at Index: %d\n",index );
	}
	
    return 0;
}

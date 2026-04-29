#include <stdio.h>
int main() 
{
    int num[100];
    for (int i = 0; i < 100; i++) 
    {
        num[i] = i + 1;
    }

    for (int i = 1; i < 100; i++) 
    {
        if (num[i] != 0) 
        {  
            for (int j = 2 * num[i] - 1 ; j < 100; j += num[i]) 
            {  
                num[j] = 0;
            }
        }
    }

   
    printf("Prime numbers from 1 to 100 are:\n");
    
    for (int i = 1; i < 100; i++) 
    {
        if (num[i] != 0) 
        {
            printf("%d ", num[i]);
        }
    }
    printf("\n");

return 0;
}

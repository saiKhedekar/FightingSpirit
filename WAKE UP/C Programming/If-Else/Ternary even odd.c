#include <stdio.h>
int main()
{
    int x;   /*  EVEN OR ODD */
    printf("enter a number: ");
    scanf("%d",&x); //ternary operator
                    // exp1 ? exp2: exp3
    
    x%2==0 ? printf("EVEN") : printf("ODD");
    
     return 0;
 }
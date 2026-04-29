// Swap two numbers using pointers

#include <stdio.h>
int main(void){
    int a = 5;
    int b = 10;

    int *ptra = &a;
    int *ptrb = &b;

    printf("Before swapping \n");
    printf("%d\n",*ptra);
    printf("%d\n",*ptrb);
    
    printf("After swaping \n");
    a = *ptra + *ptrb;
    b = *ptra - *ptrb;
    a = *ptra - *ptrb;
    printf("%d\n",*ptra);
    printf("%d\n",*ptrb);


    return 0;
}
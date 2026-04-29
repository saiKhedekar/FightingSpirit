/*Write a function changeValue(int *p) that changes the integer value at that address to 50.
Pass the address of a variable from main() and verify that it changes.*/

#include <stdio.h>
int changeValue(int*);

int main(void)
{
    int a = 7;
    printf("%d\n",a);
    a = changeValue(&a);
    printf("printing the updated value %d\n",a);
    return 0;
}

int changeValue( int *p){
    *p = 10;
    printf("inside function\n");
    printf("%d\n",*p);
    printf("out of function");

    return *p;
}


#include <stdio.h>

int main(void){

    int arr[10];
    int *arrPtr = arr;
    printf("%p\n",arrPtr);
    //Take input using ptr and for loop
    for(int i = 0; i<10; i++){
        printf("Element %d: ",(i+1));
        scanf("%d",arrPtr);
        arrPtr++;
    }

    printf("%p\n",arrPtr);

    printf("Reversing the array");

    for (int i = 0; i<=10; i++){

        printf("%d\n",*arrPtr);
        arrPtr--;
    }
   
    return 0;
}

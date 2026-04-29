/*ynamic Memory Allocation for an Array
Allocate memory for n integers using malloc, take input, 
and print the sum of all numbers.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
// Take input for total number of elements
    int n; 
    printf("Enter total number of elements for an array: ");
    scanf("%d",&n);

    // Allocate memory
    int *arr = malloc(n * sizeof(int));

    //Input for array
    int sum = 0;
    for(int i =0; i<n; i++){
        printf("Element %d: ",(i+1));
        scanf("%d",arr);
        sum = sum + (*arr); 
        arr++;
    }

    printf("Final output !! %d\n ",sum);
}
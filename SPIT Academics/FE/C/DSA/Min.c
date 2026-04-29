/*Implement a stack that supports push, pop, top, and retrieving the minimum element in constant time.*/
#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int* arr;
    int capacity;
    int top;
};

struct Stack* makestack(int capacity){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->arr = (int*)malloc(capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack){
    return stack->top == stack->capacity - 1; 
}

void push(struct Stack* stack, int val){
    if(!isFull(stack)){
        stack->arr[++stack->top] = val;
    }
}

int isEmpty(struct Stack* stack){
    return stack->top == -1;
}

int pop(struct Stack* stack){
    if(!isEmpty(stack)){
        return stack->arr[stack->top--];
    }
}

int solution(int input[], int n){
    struct Stack* stack = makestack(n);

    int min = input[0];
    for(int i = 0; i < n; i++){
        push(stack, input[i]);
    }

    for(int i = 0; i < n; i++){
        if(stack->arr[stack->top] < min ){
            min = stack->arr[stack->top];
        } 
        stack->top--;
    }

    return min;
}

int main(void){
    int n;
    printf("Enter the total number of numbers: ");
    scanf("%d",&n);

    int input[n];
    for(int i = 0; i < n; i++){
        printf("Element %d: ",(i+1));
        scanf("%d",&input[i]);
    }

    int result = solution(input, n);
    printf("The result is %d",result);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Stack{
int* arr;
int capacity;
int top;
};

struct Stack* makestack(int capacity){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int*)malloc(capacity * sizeof(int));
    return stack;
}

int isEmpty(struct Stack* stack){
    return stack->top == -1;
}

int pop(struct Stack* stack){
    if(!isEmpty(stack)){
        return stack->arr[stack->top--];
    }
}

int isFull(struct Stack* stack){
    return stack->top == stack->capacity - 1;
}

void push(struct Stack* stack,int val){
    if(!isFull(stack)){
        stack->arr[++stack->top] = val;
    }
    else{
        printf("\nStack is full\n");
    }    
}

int peek(char* input){
    struct Stack* stack = makestack(10);

    for(int i=0; input[i] != '\0'; i++){
    if(isdigit(input[i])){
        push(stack, (input[i] - '0') );
        }
    }

    return stack->top;
}

int main(void){
    char input[10];
    printf("Enter 10 single digit numbers in a row: ");
    scanf("%s",input);

    int result = peek(input);
    printf("The top of the stack is: %d",result);
    return 0;
}
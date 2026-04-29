// Declare all the reqired libraries
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// make structure to hold the stack
struct Stack{
int top;
unsigned capacity;
int* array;
};

// Make a function to initiate stack using malloc
struct Stack* makeStack(unsigned capacity){
struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
stack->capacity = capacity;
stack->top = -1;
stack->array = (int*)malloc(capacity * sizeof(int));
return stack;
}

// function for checking if stack is empty
int isEmpty(struct Stack* stack){
  return stack->top == -1;
}

// function for checking if the stack is full
int isFull(struct Stack* stack){
   return stack->top == stack->capacity - 1;
}

// function for pushing the value in stack
void push(struct Stack* stack, int value){
	if(!isFull(stack)){
	 stack->array[++stack->top] = value;
         }
}

// function for poping the value in stack
int pop(struct Stack* stack){
	if(!isEmpty(stack)){
	 return stack->array[stack->top--];
	}
}


// The function which will control the push and poping 
int solution(char* postfix){
struct Stack* stack = makeStack(10);
for(int i = 0; postfix[i] != '\0'; i++)
{
 	if(isdigit(postfix[i]))
 	{
 	   push(stack, postfix[i] - '0');
 	}
	else
	{
	  int val2 = pop(stack);
	  int val1 = pop(stack);
	  
	  switch(postfix[i]){
	  
	  case '+': push(stack, val2 + val1); break;
	  case '-': push(stack, val2 - val1);break;
	  case '*': push(stack, val2 * val1);break;
	  case '/': push(stack, val2 / val1);break;
	  case '^': push(stack, (int)pow(val1, val2)); break;
	  }
	
	}
}
	int result = pop(stack);
    free(stack->array);
    free(stack);
    return result;

}

// MOST IMP function for releasing the used memory
void freeStack(struct Stack* stack) {
	if (stack) {
	free(stack->array);
	free(stack);
	}
}

int main(void){
char postfix[10];
printf("Enter the expression in postfix: ");
scanf("%s",postfix);


int result = solution(postfix);
printf("%d\n",result);
return 0;
}

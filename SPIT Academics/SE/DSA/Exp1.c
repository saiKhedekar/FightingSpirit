#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Stack
{
    int *arr;
    int top;
    unsigned capacity;
};

struct Stack *CreateStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(sizeof(int) * capacity);
    return stack;
}

int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int data)
{
    if (!isFull(stack))
    {
        stack->arr[++stack->top] = data;
    }
}

int pop(struct Stack *stack)
{
    if (!isEmpty(stack))
    {
        return stack->arr[stack->top--];
    }
    return -1;
}

int solution(char *expr)
{
    struct Stack *stack = CreateStack(100);

    for (int i = 0; expr[i] != '\0'; i++)
    {

        if (isdigit(expr[i]))
        {
            push(stack, expr[i] - '0');
        }
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);

            switch (expr[i])
            {

            case '+':
                push(stack, val2 + val1); break;
            case '-':
                push(stack, val2 - val1); break;
            case '*':
                push(stack, val2 * val1); break;
            case '/':
                push(stack, val2 / val1);break;
            }
        }
    }
    int result = pop(stack);
    free(stack->arr);
    free(stack);
    return result;
}

int main(int argc, char const *argv[])
{
    char expr[100];
    printf("Enter the expression in postfix: ");
    scanf("%99s", expr);

    int result = solution(expr);
    printf("%d\n", result);
    return 0;
}

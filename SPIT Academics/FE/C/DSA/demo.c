#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};

// Utility to create a new node
struct Node *createNode(char data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
// Check if character is operator
int isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}
// Get precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
// Inorder traversal (prints infix expression)
void Inorder(struct Node *root)
{
    if (root == NULL)
        return;
    // Add parentheses for clarity
    if (isOperator(root->data))
        printf("(");
    Inorder(root->left);
    printf("%c", root->data);
    Inorder(root->right);
    if (isOperator(root->data))
        printf(")");
}
// Stack for nodes
struct Node *nodeStack[MAX];
int nodeTop = -1;
void pushNode(struct Node *node)
{
    nodeStack[++nodeTop] = node;
}
struct Node *popNode()
{
    return nodeStack[nodeTop--];
}
// Stack for operators
char opStack[MAX];
int opTop = -1;
void pushOp(char op)
{
    opStack[++opTop] = op;
}
char popOp()
{
    return opStack[opTop--];
}
char peekOp()
{
    if (opTop == -1)
        return '\0';
    return opStack[opTop];
}
// Convert infix to expression tree
struct Node *CreateTree(char *input)
{
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        char singleElement = input[i];
        if (isspace(singleElement))
            continue;
        if (singleElement == '(')
        {
            pushOp(singleElement);
        }
        else if (islower(singleElement))
        { // Operand
            pushNode(createNode(singleElement));
        }
        else if (isOperator(singleElement))
        {
            while (opTop != -1 && peekOp() != '(' && precedence(peekOp()) >= precedence(singleElement))
            {
                struct Node *right = popNode();
                struct Node *left = popNode();
                char op = popOp();
                struct Node *opNode = createNode(op);
                opNode->left = left;
                opNode->right = right;
                pushNode(opNode);
            }
            pushOp(singleElement);
        }
        else if (singleElement == ')')
        {
            while (opTop != -1 && peekOp() != '(')
            {
                struct Node *right = popNode();
                struct Node *left = popNode();
                char op = popOp();
                struct Node *opNode = createNode(op);
                opNode->left = left;
                opNode->right = right;
                pushNode(opNode);
            }
            if (opTop != -1 && peekOp() == '(')
            {
                popOp(); // Pop '('
            }
        }
    }
    // Process remaining operators
    while (opTop != -1)
    {
        struct Node *right = popNode();
        struct Node *left = popNode();
        char op = popOp();
        struct Node *opNode = createNode(op);
        opNode->left = left;
        opNode->right = right;
        pushNode(opNode);
    }
    return popNode(); // Root of the tree
}
int main()
{
    char input[MAX];
    printf("Enter expression: ");
    scanf("%s", input);

    struct Node *root = CreateTree(input);

    printf("Inorder traversal: ");
    Inorder(root);
    printf("\n");

    return 0;
}
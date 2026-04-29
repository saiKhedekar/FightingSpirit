#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100


struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* CreateTree(char* input){
    int i;
    char singleElement;
    for(i = 0; input[i] != '\0'; i++){
        singleElement = input[i];
        
    }


}

int main(int argc, char const *argv[])
{
    char input[MAX];
    printf("Enter expression: ");
    scanf("%99s", input);
    struct Node* root = CreateTree(input);
    printf("Infix expression: ");

    return 0;
}

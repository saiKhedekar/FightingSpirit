#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct Node *create()
{
    struct Node *temp;
    int data, choice;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nPress 0 to exit");
    printf("\nPress 1 for new node");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        printf("Enter the data:");
        scanf("%d", &data);
        temp->data = data;
        printf("\n Enter the left child of %d", data);
        temp->left = create();
        printf("\n Enter the right child of %d", data);
        temp->right = create();
        return temp;
    }
}

void Inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}

void zigzagTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Implementation of zigzag traversal would go here
    // You can use a queue to help with the level-order traversal
    struct Node *current = root;
    printf("%d ", current->data);
    // Further implementation needed

    return;
    
}


int main(int argc, char const *argv[])
{
    struct Node *root = create();
    Inorder(root);
    return 0;
}

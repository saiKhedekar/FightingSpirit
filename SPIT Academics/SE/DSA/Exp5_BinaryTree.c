#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* CreateNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* InsertNode(struct Node* root, int data) {
    if (root == NULL) {
        return CreateNode(data);
    }

    int choice;
    printf("Where do you want to insert %d? (1 for left, 2 for right of %d): ", data, root->data);
    scanf("%d", &choice);

    if (choice == 1) {
        root->left = InsertNode(root->left, data);
    } else {
        root->right = InsertNode(root->right, data);
    }
    return root;
}

void InorderTraversal(struct Node* root) {
    if (root != NULL) {
        InorderTraversal(root->left);
        printf("%d ", root->data);
        InorderTraversal(root->right);
    }
}

void leftViewRecursion(struct Node* root, int level, int *maxLevel) {
    if (root == NULL) return;

    if (*maxLevel < level) {
        printf("%d ", root->data);
        *maxLevel = level;
    }

    leftViewRecursion(root->left, level + 1, maxLevel);
    leftViewRecursion(root->right, level + 1, maxLevel);
}

void leftView(struct Node* root) {
    int maxLevel = 0;
    printf("\nLeft View of the tree: ");
    leftViewRecursion(root, 1, &maxLevel);
    printf("\n");
}

int main() {
    struct Node* root = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter value for root node: ");
    scanf("%d", &val);
    root = CreateNode(val);

    for (int i = 1; i < n; i++) {
        printf("Enter value for new node: ");
        scanf("%d", &val);
        InsertNode(root, val);
    }

    printf("\nInorder Traversal of constructed tree: ");
    InorderTraversal(root);
    leftView(root);

    return 0;
}

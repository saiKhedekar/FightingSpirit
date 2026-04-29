#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* CreateNode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct Node* MakeTree(struct Node* root, int data) {
    if (root == NULL) {
        return CreateNode(data);
    }

    if (data < root->data) 
    {
        root->left = MakeTree(root->left, data);
    } 
    else if (data > root->data)
    {
        root->right = MakeTree(root->right, data);
    }

    return root;
}

void PrintTree(struct Node* root) {
    if (root == NULL) return;

    PrintTree(root->left);
    printf("%d ", root->data);
    PrintTree(root->right);
}

int SumRange(struct Node* root){
    int low, high;
    int sum = 0;
    printf("Enter the lower limit: ");
    scanf("%d",&low);
    printf("Enter the upper limit: ");
    scanf("%d",&high);
    
    while(root->data =! low){
        root = root->left;
    }
    
    while(root->data <= high){
        sum += root->data;
    }
        
    }
        

int SumInRange(struct Node* root, int low, int high) {
    if (root == NULL)
        return 0;
    
    int sum = 0;
    if (root->data >= low && root->data <= high){
        sum += root->data;
    }

    if (root->data > low){
        sum += SumInRange(root->left, low, high);
    }

    if (root->data < high){
        sum += SumInRange(root->right, low, high);
    }
    return sum;
}

    
    void FreeTree(struct Node* root) {
    if (root == NULL)
        return;
    FreeTree(root->left);  
    FreeTree(root->right); 
    free(root);            
}


int main(void) {
    int n, data;
    struct Node* root = NULL; 
    printf("Enter the number of elements in the tree: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Element %d: ",(i + 1));
        scanf("%d", &data);

        root = MakeTree(root, data);
    }

    printf("\nInorder traversal of the BST: ");
    PrintTree(root);
    printf("\n");
    
    int low, high;
    printf("\nEnter the lower limit: ");
    scanf("%d", &low);
    printf("Enter the upper limit: ");
    scanf("%d", &high);

    int sum = SumInRange(root, low, high);
    printf("Sum of nodes in range [%d, %d] = %d\n", low, high, sum);
    FreeTree(root);

    return 0;
}

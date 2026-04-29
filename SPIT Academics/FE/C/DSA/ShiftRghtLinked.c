/*Write a function to rotate a doubly linked list to the right by K nodes. The last K nodes should move to the front, 
and the rest of the nodes should shift accordingly. If K is greater than the length of the list, rotate by K % length*/

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* CreateNode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

struct Node* head = NULL;
struct Node* tail = NULL;

void InsertAtEnd(int data){
    struct Node* newnode = CreateNode(data);
    if(head == NULL && tail == NULL){
        head = newnode;
        tail = newnode;
    }else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void Printlist(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void ShiftRight(int n){
    int k;
    printf("Enter a K node: ");
    scanf("%d",&k);
    if (k > n)
    {
        k = k % n;
    }

    struct Node* tempHead = head;
    struct Node* tempTail = tail;

    
    

     
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);

    int input[n];
    for (int i = 0; i < n;  i++)
    {
        printf("Element %d: ",(i+1));
        scanf("%d",&input[i]);
        InsertAtEnd(input[i]);
    }
    
    Printlist();
    ShiftRight(n);
    return 0;
}

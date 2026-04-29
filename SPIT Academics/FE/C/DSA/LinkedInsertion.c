#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* CreateNode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

struct Node* head = NULL;
struct Node* tail = NULL;

void InsertAtEnd(int data){
    struct Node* newnode = CreateNode(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
    }

}

void PrintList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void InsertAtStart(int data){
    struct Node* newnode = CreateNode(data);
    newnode->next = head;
    head = newnode;
}

void InsertAtIndex(int data, int index){
    struct Node* temp = head;
    struct Node* newnode = CreateNode(data);

    for (int i = 0; i < (index - 2); i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

}


int main(void)
{
    int n;
    printf("Enter total number of elements: ");
    scanf("%d",&n);

    int input[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ",(i+1));
        scanf("%d",&input[i]);
        InsertAtEnd(input[i]);
    }
    
  // InsertAtStart(12);
  InsertAtIndex(69, 3);
    PrintList();
    return 0;
}

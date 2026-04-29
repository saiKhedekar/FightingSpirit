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
    printf("NULL\n");
}

int CountElements(){
    struct Node* temp = head;
    int count = 0;
    while (temp != NULL)        
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int MiddleNode(){
    int total = CountElements()/2;
    struct Node* temp = head;
    for(int i = 1; i <= total; i++){
        temp = temp->next;
    }
    return temp->data;
    
}


int main(int argc, char const *argv[])
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
    
    Printlist();

    int result = CountElements();
    printf("Total Elements: %d\n",result);

    int middle = MiddleNode();
    printf("Middle element: %d\n",middle);
    
    return 0;
}

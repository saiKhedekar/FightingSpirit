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

void DeleteAtStart(){
    struct Node* temp = head;
    head = head->next;
    free(temp);
    PrintList();
    
}

void DeleteAtIndex(int index){
    struct Node* temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    struct Node* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    PrintList();
}

void DeleteAtEnd(){
    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
        free(temp->next);
        tail = temp;
        tail->next = NULL;
        PrintList();
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
    
    printf("Original List: "); PrintList();
    //DeleteAtStart();
    DeleteAtIndex(3);
    //DeleteAtEnd();
    return 0;
}

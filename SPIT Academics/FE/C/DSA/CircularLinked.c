#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;

struct Node* CreateNode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void InsertAtEnd(int data){
    struct Node* newnode = CreateNode(data);
    struct Node* temp = head;
    if(head == NULL && tail == NULL){
            head = newnode;
            tail = newnode;
            newnode->next = head;
        }else{
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }

}

void PrintList(){
    struct Node* temp = head;
    while(head != tail){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
}

int main(void)
{
    int n;
    printf("EBter total number of elements: ");
    scanf("%d",&n);

    int input[n];
    for (int i = 0; i < n; i++)
    {                   
        printf("Element %d: ",(i+1));
        scanf("%d",&input[i]);
        InsertAtEnd(input[i]);
    }

    PrintList();
    

    return 0;
}
 
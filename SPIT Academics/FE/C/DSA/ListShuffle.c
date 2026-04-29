/*  Given two singly linked lists(which arc already created with data and
link as members of the stmeture node), merge their nodes to make one
list
taking nodes alternately between the two lists. ShutflcMcrgeO
function with {1, 2, 3} and {7, 13, i} as input, should*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *MakeNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *head1 = NULL;
struct Node *head2 = NULL;
struct Node *head3 = NULL;

struct Node* ShuffleMerge()
{

    struct Node *temp1 = head1;
    struct Node *temp2 = head2;
    struct Node *temp3 = NULL;

    int i = 0;
    while(temp1 != NULL || temp2 != NULL)
    {
        

        if (head3 == NULL)
        {
            head3 = MakeNode(temp1->data);
            temp1 = temp1->next;
            temp3 = head3;
        }
        else
        {
            if (i % 2 != 0 && temp2 != NULL)
            {
                temp3->next = MakeNode(temp2->data);
                temp2 = temp2->next;
                temp3 = temp3->next;
                
            }

            if (i % 2 == 0 && temp1 != NULL)
            {
                temp3->next = MakeNode(temp1->data);
                temp1 = temp1->next;
                temp3 = temp3->next;
                
            }
        }
        i++;
    }
}

void printlist()
{
    struct Node *temp = head3;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main(int argc, char const *argv[])
{
    int n, data;
    printf("Enter number of elements in List 1: ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter elements for 1st List: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", (i + 1));
        scanf("%d", &data);
        if (head1 == NULL)
        {
            head1 = MakeNode(data);
        }
        else
        {
            struct Node *temp = head1;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = MakeNode(data);
        }
    }
    printf("\n");

    printf("Enter number of elements in List 2: ");
    scanf("%d", &n);
    printf("\n");

    printf("Enter elements for 2nd List: \n");
    for (int i = 0; i < n; i++)
    {

        printf("Element %d: ", (i + 1));
        scanf("%d", &data);
        if (head2 == NULL)
        {
            head2 = MakeNode(data);
        }
        else
        {
            struct Node *temp = head2;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = MakeNode(data);
        }
    }

    ShuffleMerge();
    printlist();
    return 0;
}

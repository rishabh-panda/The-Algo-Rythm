#include<stdio.h>
#include<stdlib.h>


// Initializing a DLL Node
struct Node
{
    struct Node* prev;
    int data;
    struct Node* next;
};


void DLL_Traversal1(struct Node* head) //Forward Traversal
{
    struct Node* ptr = head;

    while (ptr->next != NULL)
    {
        printf("Data: %d\n\n",ptr->data);
        ptr = ptr->next;
    }
    printf("Data: %d\n\n",ptr->data);
    
}

void DLL_Traversal2(struct Node* head) //Backward Traversal
{
    struct Node* ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    } //ptr is at the final node now

    while (ptr->prev != NULL)
    {
        printf("Data: %d\n\n",ptr->data);
        ptr = ptr->prev;
    }
    printf("Data: %d\n\n",ptr->data);
    
}

void main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node*));
    second = (struct Node*)malloc(sizeof(struct Node*));
    third = (struct Node*)malloc(sizeof(struct Node*));
    fourth = (struct Node*)malloc(sizeof(struct Node*));

    head->prev=NULL;
    head->data=911;
    head->next=second;

    second->prev=head;
    second->data=126;
    second->next=third;

    third->prev=second;
    third->data=435;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=729;
    fourth->next=NULL;

    printf("\n\nDLL Forward Traversal: \n\n");
    DLL_Traversal1(head);

    printf("\n\nDLL Backward Traversal: \n\n");
    DLL_Traversal2(head);
}
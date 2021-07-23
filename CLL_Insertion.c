#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


void CLL_Traversal(struct Node* head)
{
    struct Node* ptr = head;
    printf("Data: %d\n\n",ptr->data);
    ptr = ptr->next;

    while (ptr != head)
    {
        printf("Data: %d\n\n",ptr->data);
        ptr = ptr->next;
    }
    
}

//CLL Insertion Algorithm (no concept of head)
struct Node* CLL_Insertion(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));

    struct Node* p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    ptr->data = data;
    head = ptr;

    return head;
}

// Function to insert after any Node in between CLL
    struct Node* Insertion_AfterNode(struct Node* head, struct Node* PrevNode,  int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

        ptr->data = data;
        ptr->next = PrevNode->next;
        PrevNode->next = ptr;

        return head;
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

    head->data=911;
    head->next=second;

    second->data=126;
    second->next=third;

    third->data=435;
    third->next=fourth;

    fourth->data=729;
    fourth->next=head;

    printf("\n\nOriginal Circular Linked List: \n\n");
    CLL_Traversal(head);

    head = CLL_Insertion(head, 62);
    printf("\n\nCircular Linked List after Insertion: \n\n");
    CLL_Traversal(head);

    head = Insertion_AfterNode(head, third, 100); 
    printf("\n\nInsertion After a given Node\n\n");
    CLL_Traversal(head);
}
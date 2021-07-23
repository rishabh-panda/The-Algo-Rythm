#include<stdio.h>
#include<stdlib.h>


// Initializing a DLL Node
struct Node
{
    struct Node* prev; 
    int data; 
    struct Node* next; 
};

//Forward Traversal in DLL
void DLL_Traversal1(struct Node* head) 
{
    struct Node* ptr = head;

    while (ptr->next != NULL)
    {
        printf("Data: %d\n\n",ptr->data);
        ptr = ptr->next;
    }
    printf("Data: %d\n\n",ptr->data);
    
}

//Backward Traversal in DLL
void DLL_Traversal2(struct Node* head) 
{
    struct Node* ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    } //ptr is at the final node of DLL now

    while (ptr->prev != NULL)
    {
        printf("Data: %d\n\n",ptr->data);
        ptr = ptr->prev;
    }
    printf("Data: %d\n\n",ptr->data);
    
}

//Function to insert at the beginning of DLL
    struct Node* Insertion_Beginning(struct Node* head, int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr -> next = head;
        ptr -> data = data;
        ptr -> prev = NULL;
        return ptr;
    }

    //Function to insert at any given index within the DLL (except beginning)
    struct Node* Insertion_AnyIndex(struct Node* head, int data, int index)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        struct Node* p = head;
        int i = 0;
          while (i != index-1)
          {
            p = p -> next;
            i++;
          }
          ptr -> data = data;
          ptr -> next = p-> next;
          ptr -> prev = p;
          p -> next = ptr;
        
        return head;
    }

    // Function to insert at End
    struct Node* Insertion_End(struct Node* head, int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        struct Node* p = head;

        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr -> data = data;
        p -> next = ptr;
        ptr -> prev = p;
        ptr -> next = NULL;
        return head;
    }

    // Function to insert after any Node in between
    struct Node* Insertion_AfterNode(struct Node* head, struct Node* PrevNode,  int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

        ptr->data = data;
        ptr->next = PrevNode->next;
        ptr->prev = PrevNode;
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

    printf("\n\nOriginal Linked List: \n\n");
    DLL_Traversal1(head);

    head = Insertion_Beginning(head, 666); 
    printf("\n\nLinked List After Insertion at Beginning (New Head)\n\n");
    DLL_Traversal1(head); 

    head = Insertion_AnyIndex(head, 555, 2); 
    printf("\n\nLinked List After Insertion at any Index (i)\n");
    DLL_Traversal1(head);

    head = Insertion_End(head, 888); 
    printf("\n\nLinked List After Insertion at End\n");
    DLL_Traversal1(head); 

    head = Insertion_AfterNode(head, third, 100); 
    printf("\n\nInsertion done after a given Node\n");
    DLL_Traversal1(head);
}
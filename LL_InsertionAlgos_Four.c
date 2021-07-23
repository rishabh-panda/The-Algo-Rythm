#include<stdio.h>
#include<stdlib.h>
    
    struct Node
    {
        int data;
        struct Node* next; 
    };
    
    //Function to traverse the Linked List
    void LinkedListTraversal(struct Node* ptr)
    {
        while (ptr != NULL)
        {
            printf("DATA:  %d\n\n",ptr->data);
            ptr=ptr->next;
        }
         
    }

    //Function to insert at the beginning
    struct Node* Insertion_Beginning(struct Node* head, int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
        ptr -> next = head;
        ptr -> data = data;
        return ptr;
    }
    
    //Function to insert at any given index within the linked list (except beginning)
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
        ptr->data = data;
        p->next = ptr;
        ptr->next = NULL;
        return head;
    }

    // Function to insert after any Node in between
    struct Node* Insertion_AfterNode(struct Node* head, struct Node* PrevNode,  int data)
    {
        struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

        ptr->data = data;
        ptr->next = PrevNode->next;
        PrevNode->next = ptr;

        return head;
    }
    
    int main() {
 
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data=911;
    head->next=second;

    second->data=126;
    second->next=third;

    third->data=435;
    third->next=NULL;

    printf("\nOriginal Linked List\n");
    LinkedListTraversal(head); //before any operation (original LL) 

    head = Insertion_Beginning(head, 999); //new data element in head node
    printf("\n\nLinked List After Insertion at Beginning (New Head)\n");
    LinkedListTraversal(head); //printing the updated list

    head = Insertion_AnyIndex(head, 566, 3); //new data element at specified index
    printf("\n\nLinked List After Insertion at Index (i)\n");
    LinkedListTraversal(head); //printing the updated List

    head = Insertion_End(head, 786); //new data element at specified index
    printf("\n\nLinked List After Insertion at End\n");
    LinkedListTraversal(head); //printing the updated List

    head = Insertion_AfterNode(head, third, 100); 
    printf("\n\nInsertion done after a given Node\n");
    LinkedListTraversal(head); //printing the updated List
 
    return 0;
}
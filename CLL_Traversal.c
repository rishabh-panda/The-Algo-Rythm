#include<stdio.h>
#include<stdlib.h>
    
    //Declaring a Node
    struct Node
    {
        int data;
        struct Node* next;
    };
    
    
    //Function to print Node elements in CLL
    void CLL_Traversal(struct Node* head)
    {   struct Node* ptr = head; //pointer declared for traversal so that we dont lose the head value
        
        //Pushing ptr one step ahead for successful circular traversal after head node
        //do-while can also be implemented here
        printf("Data: %d \n\n",ptr->data);
        ptr = ptr->next;

        while (ptr != head)
        {
            printf("Data: %d \n\n",ptr->data);
            ptr = ptr->next;
        }
        
    }
    
    int main() {
 
    //Node Initiation Begins...
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    head = (struct Node*)malloc(sizeof(struct Node*));
    second = (struct Node*)malloc(sizeof(struct Node*));
    third = (struct Node*)malloc(sizeof(struct Node*));
    fourth = (struct Node*)malloc(sizeof(struct Node*));
    fifth = (struct Node*)malloc(sizeof(struct Node*));

    head->data=911;
    head->next=second;

    second->data=126;
    second->next=third;

    third->data=435;
    third->next=fourth;

    fourth->data=729;
    fourth->next=fifth;

    fifth->data=888;
    fifth->next=head; //Last Node points back to head

    printf("\n\nOriginal Circular Linked List: \n\n");
    CLL_Traversal(head);
 
    return 0;
}
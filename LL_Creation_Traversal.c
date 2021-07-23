#include<stdio.h>
#include<stdlib.h>
    
    struct Node
    {
        int data;
        struct Node* next;
    };
    
    
    void LinkedListTraversal(struct Node* ptr)
    {
        while (ptr != NULL)
        {
            printf("DATA:  %d\n\n",ptr->data);
            ptr=ptr->next;
        }
         
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

    LinkedListTraversal(head);
 
    return 0;
}
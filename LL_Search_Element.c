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

    int search_function(struct Node* head, int element){

            struct Node* ptr = head;  // Initialize pointer
           while (ptr != NULL)
           {
             if (ptr->data == element)
                 return 1;
             ptr = ptr->next;
           }
    return 0;
    }
    
    int main() {
    int ELEMENT;    
 
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

    search_function(head, 126)? printf("Element Found") : printf("Element Absent");
 
    return 0;
}
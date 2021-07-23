#include<stdio.h>
#include<stdlib.h>

    struct Node
    {
    int data;
    struct Node* next;
    };
    
    //Function to traverse the Linked List
    void LL_Traversal(struct Node* ptr)
    
    {
        while (ptr != NULL)
        {
           printf("Data: %d \n\n",ptr->data);
           ptr = ptr->next;
        }
        
    }

    //Function to delete the first node
    struct Node* LL_DeleteFirst(struct Node* head)
    {
    struct Node* ptr = head;
    head = head->next;
    free(ptr);

    return head;

    }

    //Function to delete a node at any index (in between)
    struct node* LL_DeleteAtIndex(struct Node* head, int index)
    {
     struct Node* p = head;
     struct Node* q = head->next;

     int i = 0;
          while (i != index-1)
          {
            p = p->next;
            q = q->next;
            i++;
          }
        p->next=q->next;
        free(q);
     return head;
    }

    //Function to delete a last node
    struct node* LL_DeleteLast(struct Node* head)
    {
     struct Node* p = head;
     struct Node* q = head->next;

     int i = 0;
          while (q->next != NULL)
          {
            p = p->next;
            q = q->next;
            i++;
          }
        p->next = NULL;
        free(q);
     return head;
    }


    //Function to delete a node at any value (in between)
    struct node* LL_DeleteAtValue(struct Node* head, int value)
    {
     struct Node* p = head;
     struct Node* q = head->next;

          while (q->data != value  && q->next != NULL)
          {
            p = p->next;
            q = q->next;
          }
        if (q->data == value)
        {
            p->next = q->next;
            free(q);
        }
        
     return head;
    }
    
    int main() {
 
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    struct Node* sixth;
    struct Node* seventh;
    struct Node* eighth;

    head=(struct Node*)malloc(sizeof(struct Node*));
    second=(struct Node*)malloc(sizeof(struct Node*));
    third=(struct Node*)malloc(sizeof(struct Node*));
    fourth=(struct Node*)malloc(sizeof(struct Node*));
    fifth=(struct Node*)malloc(sizeof(struct Node*));
    sixth=(struct Node*)malloc(sizeof(struct Node*));
    seventh=(struct Node*)malloc(sizeof(struct Node*));
    eighth=(struct Node*)malloc(sizeof(struct Node*));

    head->data=6778;
    head->next=second;

    second->data=5555;
    second->next=third;

    third->data=8834;
    third->next=fourth;

    fourth->data=9967;
    fourth->next=fifth;

    fifth->data=3377;
    fifth->next=sixth;

    sixth->data=1111;
    sixth->next=seventh;

    seventh->data=2229;
    seventh->next=eighth;

    eighth->data=4003;
    eighth->next=NULL;

    printf("Original Linked List\n\n");
    LL_Traversal(head);

    head = LL_DeleteFirst(head);  // Removal of head node
    printf("Linked List After Head Deletion\n\n");
    LL_Traversal(head);

    head = LL_DeleteAtIndex(head, 3); //Removal of node at any index (in between)
    printf("Linked List After Deletion of Node at Index\n\n");
    LL_Traversal(head);

    head = LL_DeleteLast(head); // Removal of Last Node
    printf("Linked List After Deletion of Last Node\n\n");
    LL_Traversal(head);

    head = LL_DeleteAtValue(head, 1111);
    printf("Linked List After Deletion of Node at Value\n\n");
    LL_Traversal(head);

    return 0;
}
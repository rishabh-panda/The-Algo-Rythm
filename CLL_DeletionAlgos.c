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

        do
        {
            printf("Data: %d\n\n",ptr->data);
            ptr = ptr->next;
        } while (ptr->next != head);  

        printf("Data: %d\n\n",ptr->data);

}

    //Function to delete a node at any index (only in between)
    struct node* CLL_DeleteAtIndex(struct Node* head, int index)
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


    //Function to delete a node at any value (in between)
    struct node* CLL_DeleteAtValue(struct Node* head, int value)
    {
     struct Node* p = head;
     struct Node* q = head->next;

          while (q->data != value  && q->next != head)
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


#include<stdio.h>
    int main() {
 
    struct Node* head=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* fifth=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* sixth=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* seventh=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* eighth=(struct Node*)malloc(sizeof(struct Node*));

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
    eighth->next=head;

    printf("Original Linked List\n\n");
    CLL_Traversal(head);

    head = CLL_DeleteAtIndex(head, 3); //Removal of node at any index (in between)
    printf("Linked List After Deletion of Node at Index\n\n");
    CLL_Traversal(head);

    head = CLL_DeleteAtValue(head, 1111);//Removal of node constituting specific data
    printf("Linked List After Deletion of Node at Value\n\n");
    CLL_Traversal(head);
 
    return 0;
}
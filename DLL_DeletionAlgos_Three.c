#include <stdio.h>
#include <stdlib.h>

//structure of Node with prev and next pointers
struct node {
    int data;
    struct node * prev;
    struct node * next;
} *head, *tail;

void createList(int n);
void displayList();
void delete_beginning();
void delete_end();
void delete_given_position(int pos);

int main()
{
    int n;
    head = NULL;
    tail = NULL;

    printf("\nEnter the total number of nodes in list: "); // Input the number of nodes
    scanf("%d", &n);
    createList(n);
    printf("\n\nTHE DOUBLY LINKED LIST IS:\n\n");
    displayList();

    delete_beginning();
    printf("\n\nAFTER DELETION OF HEAD:\n\n");
    displayList();

    delete_end();
    printf("\n\nAFTER DELETION OF TAIL:\n\n");
    displayList();

    delete_given_position(2);
    printf("\n\nAFTER DELETION AT ANY GIVEN POSITION:\n\n");
    displayList();

    return 0;
}

void createList(int n)
{
    int i, data;
    struct node *newNode;
    if(n >= 1)
        {
            head = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data of node 1 : ");
            scanf("%d", &data);
            head->data = data;
            head->prev = NULL; // HEAD nodes's prev is set to NULL
            head->next = NULL; // HEAD nodes's next is set to NULL
            tail = head;
            for(i=2; i<=n; i++)
                {
                    newNode = (struct node *)malloc(sizeof(struct node));
                    printf("\nEnter data of node %d : ", i);
                    scanf("%d", &data);
                    newNode->data = data;
                    newNode->prev = tail; // Link new node with the previous node
                    newNode->next = NULL;
                    tail->next = newNode; // Link previous node with the new node
                    tail = newNode; // Make new node as last node   
                }
        }
}
void displayList()
{
    struct node * temp;
    int n = 1;
    if(head == NULL)
        {
        printf("\nList is empty.\n");
        }
    else
        {
        temp = head;
        // Print the list
        while(temp != NULL)
            {
                printf("%d\t", temp->data);
                n++;
                /* Move the current pointer to next node */
                temp = temp->next;
            }
    }
}

/*  Function to delete the node at the beginning of the list  */
void delete_beginning()
{
    struct node * temp;
    temp = head;
    head = head -> next;  // Shift head node
    head -> prev == NULL;  // The prev pointer of the head node is NULL
    free(temp);          // Delete the first node
}

void delete_end()
{
    struct node * temp;
    if(tail == NULL)
        {
          printf("Unable to delete. List is empty.\n");
        }
    else
    {
        temp = tail;
        tail = tail->prev; // Move last pointer to 2nd last node
        if (tail != NULL)
        tail->next = NULL; // The next pointer of the last node is NULL
        free(temp); // Delete the last node
    }
}

void delete_given_position(int position)
{
    struct node *temp;
    int i;
    temp = head;
    for(i=0; i<position && temp!=NULL; i++)
        {
        temp = temp->next;
        }
    if(temp != NULL)
        {
        temp->prev->next = temp->next;   // Assign the next pointer of node to be deleted to its previous node's prev pointer
        temp->next->prev = temp->prev;   // Assign the prev pointer of the node to be deleted to its next node's next pointer
        free(temp); // Delete the temp node
        }
    else
        {
        printf("Invalid position!\n");
        }
}
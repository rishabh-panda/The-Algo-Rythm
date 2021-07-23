#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *headerNode;
void createGroundedLinkedList();
void displayGroundedLinkedList();

int  main()
{

  headerNode=NULL;
  createGroundedLinkedList();
  displayGroundedLinkedList();
  return 0;
}

void createGroundedLinkedList()
{

  struct node *newNode,*ptr;
  int n;
  while(n != -1)
  {
    // beginning with the HLL
    if(headerNode==NULL)

    {

      headerNode=(struct node *)malloc(sizeof(struct node));
      newNode=(struct node *)malloc(sizeof(struct node));
      printf("\n\n Enter an integer value: ");
      scanf("%d",&newNode->data);
      headerNode->next = newNode;
      newNode->next=NULL;  // => grounded
      ptr=newNode;

    }

    // Continuing to add more values once the HLL has begun
    else

    {

      newNode=(struct node *)malloc(sizeof(struct node));
      printf("\n Enter an integer value: ");
      scanf("%d",&newNode->data);
      ptr->next = newNode;
      newNode->next=NULL;  // => grounded
      ptr=newNode;

    }

    printf("\n Enter -1 to STOP and 1 to CONTINUE: ");
    scanf(" %d",&n);

  }

  printf("Linked list is created\n");

}

void displayGroundedLinkedList()

{

  struct node *ptr;
  ptr = headerNode;
  if(ptr !=NULL)
  {

    ptr = ptr->next;
    printf("\nThe content in the Grounded linked list with header are :\n");
    while(ptr != headerNode)
    {

      printf("%d\n",ptr->data);
      ptr = ptr->next;

      /* pointer temp is set to point at the node where its next

      pointer is pointing. That is, pointer temp is set to point

      at its next successive node */

    }

  }

  else
    printf("Linked list is empty\n");

}
#include<stdio.h>
#include<stdlib.h>
 
struct node 
{
  int Data;
  struct node* Next;
};
 

// Function to create Linked List from Array elements.

struct node* createLL(int* Arr, int n)
{
  static int i=0; // static used to retain the previous value for one-by-one execution
  struct node* ptr = NULL;
  if(n==0)
    return NULL;

  // Create New Node    
  ptr = (struct node*)malloc(sizeof(struct node*));
  ptr->Data = Arr[i++];
  ptr->Next = createLL(Arr, --n);
  return ptr;
}
 
// Display
void displayLL(struct node *ptr)
{
  while(ptr)
  {
    printf("%d ", ptr->Data);
    ptr=ptr->Next;
  }
}
 
int main()
{
  int n, i=0, arr[100]={0};
  struct node *ptr = NULL;
  printf("\nEnter the number of elements: ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
     
  printf("\nCreate linked list from array");
  ptr =createLL(arr, n);
  printf("\nDisplay Linked List : \n");
  if(ptr)
   displayLL(ptr);    
} 
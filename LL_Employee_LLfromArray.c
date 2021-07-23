#include<stdio.h>
#include<stdlib.h>
 
struct personnel 
{
  char *Name;
  int Emp_no;
  char Sex;
  float Salary;
  struct personnel *Next;
}; 

// Function to create Linked List from Array elements.

struct personnel* createLL_integers(int* Arr, int n)
{
  static int i=0; // static used to retain the previous value for one-by-one execution
  struct personnel *ptr = NULL;
  if(n==0)
    return NULL;

  // Create New Node    
  ptr = (struct personnel*)malloc(sizeof(struct personnel*));
  ptr->Emp_no = Arr[i++];
  ptr->Next = createLL_integers(Arr, --n);
  return ptr;
}


struct personnel* createLL_character(char* Arr, int n)
{
  static int i=0; // static used to retain the previous value for one-by-one execution
  struct personnel *ptr = NULL;
  if(n==0)
    return NULL;

  // Create New Node    
  ptr = (struct personnel*)malloc(sizeof(struct personnel*));
  ptr->Emp_no = Arr[i++];
  ptr->Next = createLL_character(Arr, --n);
  return ptr;
}
 
// Display
void displayLL_integer(struct personnel *ptr)
{
  while(ptr)
  {
    printf("%d ", ptr->Emp_no);
    ptr=ptr->Next;
  }
}

// Display
void displayLL_character(struct personnel *ptr)
{
  while(ptr != NULL)
  {
    printf("%c ", ptr->Emp_no);
    ptr=ptr->Next;
  }
}
 
int main()
{
  int i=0; 

  char name[5] = {'A', 'S', 'P', 'V', 'R'}; // name array
  int Arr_emp_no[5] = {1904186, 1904219, 1904211, 1904238, 1904215}; // employee numbers
  char sex[5] = {'M', 'M', 'M', 'F', 'M'}; // employee gender details
  int salary[5] = {60457, 61088, 62094, 59456, 25099}; // salary details

  int total_emp = 5; // array size

  struct personnel *ptr = NULL;
     
  printf("\n\n\nStoring Employee Name in Linked List... ");
  ptr = createLL_character(name, total_emp);
  printf("\n ");
  if(ptr)
   displayLL_character(ptr);

  printf("\n\n\nStoring Employee Salary in Linked List... ");
  ptr = createLL_integers(salary, total_emp);
  printf("\n ");
  if(ptr) {
   displayLL_integer(ptr); }

  printf("\n\n\nStoring Employee Number in Linked List... ");
  ptr = createLL_integers(Arr_emp_no, total_emp);
  printf("\n ");
  if(ptr) {
   displayLL_integer(ptr); } 

  printf("\n\n\nStoring Employee Gender in Linked List... ");
  ptr = createLL_character(sex, total_emp);
  printf("\n ");
  if(ptr)
   displayLL_character(ptr); 
} 
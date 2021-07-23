#include<stdio.h>
void main()
{
   int arr[50], size;
   printf("Enter size of Array: ");
   scanf("%d",&size);
   printf("Enter the Array elements:\n");
   
   for (int i = 0; i < size; i++)
   {
       scanf("%d\n",&arr[i]);
   }  
   printf("Entered Array (Output):\n");
   for (int i = 0; i < size; i++)
   {
       printf("%d\n",arr[i]);
   }
   
}

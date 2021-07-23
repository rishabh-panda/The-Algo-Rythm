#include<stdio.h>

    int insertion_func( //unsorted insertion algorithm
        int arr[],
        int size,
        int element,
        int index) { 
        /*func to insert a certain element at a certain index*/
     
             for (int i = size-1; i >= index; i--)
             {
                 arr[i+1] = arr[i];
             }
             arr[index] = element;
             return size+1;
        
    }
    
    void main() {
 
    int arr[] = {6,2,0,4,7};

    int size = sizeof(arr)/sizeof(int); //number of array elements
    int element = 44; //to be inserted
    int index = 4;  //position for insertion
    
    printf("Initial Array: ");
    for (int i = 0; i < size; i++)
       {
           printf("%d  ",arr[i]);
       }

    size = insertion_func(arr,size,element,index); //updating size of array by 1
    
    printf("Updated Array: ");
   for (int i = 0; i < size; i++)
       {
           printf("%d  ",arr[i]);
       }

}
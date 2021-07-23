#include<stdio.h>

    int sorted_insertion_func( //sorted insertion algorithm
        int arr[],
        int size,
        int element) { 
        //func to insert a certain element at a certain index to maintain the sorted order

             int i;
             for (i = size-1; (i >= 0 && arr[i] > element); i--){
             
                 arr[i+1] = arr[i];  // right shifting the elements by one position
                }
             
             arr[i+1] = element;
             return (size+1);        
        
    }


    int main() {
 
    int arr[] = {12,23,54,66,82}; 

    //array parameters
    int size = sizeof(arr)/sizeof(int); //number of array elements
    int i;
    int element = 98; //element to be inserted


    printf("Initial Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }

    size = sorted_insertion_func(arr,size,element);

    printf("Updated Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;

}
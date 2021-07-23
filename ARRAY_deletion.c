#include<stdio.h>
    
    //Deletion Algorithm
    // Function definition to delete an element in an array
    int deletion(int arr[], int index, int size) {

        for (int i = index; i < size; i++)
           {
             arr[i]=arr[i+1];
           }
           return (size-1);
       
    }
       
    int main() {
 
    int arr[] = {14,32,66,29,54,98,76,83,20,59};
    int size = sizeof(arr)/sizeof(int);
    int index = 5; //element at index to be deleted

    printf("Initial Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    size = deletion(arr,index,size);

    printf("Final Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ",arr[i]);
    }
    
    return 0;
}
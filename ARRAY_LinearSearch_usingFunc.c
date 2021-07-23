#include<stdio.h>
    
    int LinearSearch(int arr[], int count, int search){

        for (int i = 0; i < count; i++)
    {
        if (search == arr[i])
        {
            return i;
        }
        
    }
 
    return 0;
    }
    
    int main() {
 
    int arr[] = {45,66,72,21,99,88,64,59,76,36};
    int search = 21; // Element to be searched
    int count = sizeof(arr)/sizeof(int);  // 10 elements in Array
    int index = LinearSearch(arr, count, search);

    printf("Element %d found at index %d\n",search, index);


}
#include<stdio.h>
    
    // Binary Search Algor

    int BinarySearch(int arr[], int low, int high, int search){
        
        int mid = (low+high)/2; //calculating middle element of Array
                                // formula = low + (high - low)/2;

        if (search == arr[mid]) //case 1: If element found at mid point
        {
            return mid;
        }
        
        else if (search > arr[mid])  // Case 2: If element lies beyond mid point
        {
            return BinarySearch(arr, (mid+1), high, search);
        }

        else    // case 3: If element lies before mid point
            return BinarySearch(arr, low, (mid-1), search);   

    }
    
    int main() {
 
    int arr[] = {34,66,72,84,99};
    int elements = sizeof(arr)/sizeof(int);
    int search = 84;
    int index = BinarySearch(arr, 0, elements-1, search);

    printf("The element %d is found at index %d\n",search, index);
 
    return 0;
}

#include<stdio.h>
    int main() {
 
    int arr[] = {45,66,72,21,99,88,64,59,76,36};
    int search = 64; // Element to be searched
    int count = sizeof(arr)/sizeof(int);  // 10 elements in Array
    int i;

    for (i = 0; i < count; i++)
    {
        if (search == arr[i])
        {
            printf("element %d found at index %d\n",search,i);
        }
        
    }
 
    return 0;
}
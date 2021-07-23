#include<stdio.h>

    int main() {
 
    int arr[] = {2,6,3,9,5,7};
    int n = 6;
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);  
// (OR) printf("%d ", *(ptr+i));

        //dereferencing operator to access elements from their addresses.
    }
    
    return 0;
}
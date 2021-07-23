#include<stdio.h>

    int main() {
 
    int arr[3][2] = {{4,8},
                     {9,3},
                     {1,5}};
    int rows = 3; 
    int columns = 2;
    int **ptr = (int**)arr;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        
    }
    
    return 0;
}
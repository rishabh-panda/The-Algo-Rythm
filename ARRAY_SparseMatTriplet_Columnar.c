#include<stdio.h>

    int main() {
 
    int matrix[4][5] = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };

// Counting the non zero elements
// size of matrix  
    int size = 0;  
    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(matrix[i][j]!=0)  
            {  
                size++;  
            }  
        }  
    }  
   // Defining final matrix  
    int sparse_matrix[3][size+1];   
     int k=1;  

 //heading part of triplet matrix   
   sparse_matrix[0][0] = 4;
   sparse_matrix[1][0] = 5;
   sparse_matrix[2][0] = size;

    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(matrix[i][j]!=0)  
            {  
                sparse_matrix[0][k] = i;  
                sparse_matrix[1][k] = j;  
                sparse_matrix[2][k] = matrix[i][j];  
                k++;  
            }  
      }  
    }  
   // Displaying the final matrix  
    for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<size+1; j++)  
        {  
            printf("%d ", sparse_matrix[i][j]);  
            printf("  ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  
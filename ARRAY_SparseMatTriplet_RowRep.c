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
    int sparse_matrix[size+1][3];   
     int k=1;  

 //heading part of triplet matrix   
   sparse_matrix[0][0] = 4;
   sparse_matrix[0][1] = 5;
   sparse_matrix[0][2] = size;

    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<5; j++)  
        {  
            if(matrix[i][j]!=0)  
            {  
                sparse_matrix[k][0] = i;  
                sparse_matrix[k][1] = j;  
                sparse_matrix[k][2] = matrix[i][j];  
                k++;  
            }  
      }  
    }  
   // Displaying the final matrix  
    for(int i=0 ;i<size+1; i++)  
    {  
        for(int j=0; j<3; j++)  
        {  
            printf("%d ", sparse_matrix[i][j]);  
            printf("\t");  
        }  
        printf("\n");  
    }  
    return 0;  
}  
#include<stdio.h>
#include<stdlib.h>

    int main() {
 
    int rows, columns, i, j;

    printf("\nEnter the Number of Rows in Array:\n");
    scanf("%d",&rows);
    printf("\nEnter the Number of Columns in Array:\n");
    scanf("%d",&columns);

    if (rows<1 || columns<1)
    {
        printf("\nIncorrect Value");
        exit(0);
    }

    int **ptr = (int**)malloc(rows * sizeof(int*)); //declaring rows dynamically
    if (ptr == NULL)
    {
        printf("\nInsufficient Memory");
        exit(0);
    }

    for (int i = 0; i < rows; i++)
    {
        ptr[i] = (int*)malloc(columns * sizeof(int)); //declaring columns dynamically
    }

    if (ptr == NULL)
    {
        printf("\nInsufficient Memory");
        exit(0);
    }
    
    printf("\nEnter Elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        { 
            printf("Enter value for disp[%d][%d]: ", i, j);
            scanf("%d", &ptr[i][j]);
        }
        
    }

    printf("\nElements Entered:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        
    }

    free(ptr);
    return 0;
}
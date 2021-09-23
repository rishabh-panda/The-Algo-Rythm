#include<stdio.h>

void main()
{
int i,j,k;
// 5x5 Matrix Input
int mat[5][5]={{81,82,83,84,65},
               {76,57,38,39,10},
               {11,12,13,14,15},
               {16,17,18,19,20},
               {21,22,23,24,25}};

// Display of Matrix
printf("Entered matrix is:\n\n");
for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
        {
        printf("%d  ",mat[i][j]);
        }
    printf("\n");
    }

printf("\nTridiagnal matrix:\n\n");
printf("%d  %d\n",mat[0][0],mat[0][1]);
for(i=1;i<5;i++)
    {
    for(k=1;k<i;k++)
        {
        printf("  ");
        }
    if(i==4)
        printf("%d  %d\n",mat[4][3],mat[4][4]);
    else
        {
        for(j=i;j<5;j++)
            {
            if(i==j)
            printf("%d  %d  %d",mat[i][j-1],mat[i][j],mat[i][j+1]); //printing diagonal & its top, bottom part
            }
        printf("\n");
        }
    }

}

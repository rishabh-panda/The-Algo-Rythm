#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix1[3][3], matrix2[3][3], Sum[3][3]={0}, Product[3][3]={0};
    //Sum and product initialized to zero
	int m,n,p,q;
	printf("Enter no. of rows and columns in matrix A: ");
	scanf("%d%d",&m,&n);
	printf("Enter no. of rows and columns in matrix B: ");
	scanf("%d%d",&p,&q);
	if(m!=p || n!=q)
	{
		printf("Matrix Addition is not possible");
		return;
	}
	else if(n!=p)
	{
		printf("Matrix Multiplication is not possible");
		return;
	}
	else
	{
		printf("Enter elements of matrix A: ");
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				scanf("%d", &matrix1[i][j]);
		printf("Enter elements of matrix B: ");
		for(int i=0;i<p;i++)
			for(int j=0;j<q;j++)
				scanf("%d", &matrix2[i][j]);

		//Matrix Addition
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				Sum[i][j] = matrix1[i][j] + matrix2[i][j];
		printf("\nResult of Matirx Addition:\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d ", Sum[i][j]);
			printf("\n");
		}
        
		//Matrix Multiplication
		for(int i=0;i<m;i++)
			for(int j=0;j<q;j++)
				for(int k=0;k<p;k++)
					Product[i][j] += matrix1[i][k]*matrix2[k][j];
		printf("\nResult of Matirx Multiplication:\n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
				printf("%d ", Product[i][j]);
			printf("\n");
		}
	}
	getch();
}
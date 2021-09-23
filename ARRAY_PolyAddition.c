#include<stdio.h>
#include<conio.h>



struct poly {
   int exp;
   int coef;
}  a[10],b[10],c[10];

void main() {
    int n1,n2,n3,i,j,k;

printf("\nNumber of Co-efficients of Polynomial A: ");
scanf("%d",&n1);

printf("\n\nEnter the Co-efficients & Exponents for A: \n\n");
for (int i = 0; i < n1; i++)
scanf("%d%d",&a[i].coef,&a[i].exp);
printf("\nNumber of Co-efficients of Polynomial B: ");
scanf("%d",&n2);
printf("\nEnter the Co-efficients & Exponents for B: \n\n");


for(i=0;i<n2;i++)
scanf("%d%d",&b[i].coef,&b[i].exp);
i=0;j=0;k=0;
while((i<n1)&&(j<n2))
{
if(a[i].exp==b[j].exp)

{
c[k].exp=a[i].exp+b[j].exp;
c[k].coef = a[i].coef;
i++;
j++;
k++;
}
else
if(a[i].exp>b[j].exp)
{

c[k].exp=a[i].exp;
c[k].coef=a[i].coef;
i++;
k++;
}
else
{
c[k].exp=b[j].exp;
c[k].coef=b[j].coef;
k++;
j++;
}
}
while(i<n1)
{
c[k].exp=a[i].exp;
c[k].coef=a[i].coef;
i++;
k++;
}
while(j<n2)
{
c[k].exp=b[j].exp;
c[k].coef=b[j].coef;
k++;
j++;
}
i=0;
printf("\nSum of the Polynomial Inputs\n");
while(i<k)
{
printf("%dX^%d + ",c[i].coef,c[i].exp);
i++;
}
getch();
}

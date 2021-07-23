#include<stdio.h>
#include<stdlib.h>

    int main() {
 
    int n, sum = 0;
    printf("\nEnter the Number of Elements in Array:\n");
    scanf("%d",&n);

    if (n<1)
    {
        printf("\nIncorrect Value");
        exit(0);
    }

    int *ptr = (int*)malloc(n * sizeof(int)); //declaring & defining a pointer for DMA
    if (ptr == NULL)
    {
        printf("\nInsufficient Memory");
        exit(0);
    }

    printf("\nEnter Elements:\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i); // no ampercent required as ptr already holds an address
        sum+=*(ptr+i);
    }

    printf("\nSum Elements Entered:\n");
    
        printf("%d ", sum); 

    free(ptr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

    int main() {
 
    int n;
    printf("\nEnter the Number of Elements in Array:\n");
    scanf("%d",&n);

    if (n<1)
    {
        printf("\nIncorrect Value");
        exit(0);
    }

    //A
    int *ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("\nInsufficient Memory");
        exit(0);
    }

    printf("\nEnter Elements:\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i); // no ampercent required as ptr already holds an address
    }

    printf("\nElements Entered:\n");
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", *(ptr + i)); // dereferencing operator required to extract data from address
    }
    free(ptr);
    return 0;
}

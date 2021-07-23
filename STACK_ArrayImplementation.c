#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size ;
    int top;
    int * arr;
};

int isEmpty(struct stack* ptr){ // Time Complexity = O(1)
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}

int isFull(struct stack* ptr){ // Time Complexity = O(1)
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr, int val){ // Time Complexity = O(1)
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr){ // Time Complexity = O(1)
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* sp, int i){ // Time Complexity = O(1)
    int arrayIndex = sp->top -i + 1;
    if(arrayIndex < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayIndex];
        }
}    

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp){
    return sp->arr[0];
}

int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("\n\nStack has been created successfully\n");

    printf("\nBefore pushing, Full: %d\n", isFull(sp));
    printf("\nBefore pushing, Empty: %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("\nAfter pushing, Full: %d\n", isFull(sp));
    printf("\nAfter pushing, Empty: %d\n", isEmpty(sp));

    printf("\nPopped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("\nPopped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("\nPopped %d from the stack\n", pop(sp)); // --> Last in first out!

    printf("\nAfter pushing, Full: %d\n", isFull(sp));
    printf("\nAfter pushing, Empty: %d\n", isEmpty(sp));

    // Printing values from the stack = PEEKing
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("\nThe value at position %d is %d\n", j, peek(sp, j));
    }

    printf("\nThe top most value of this stack is %d\n", stackTop(sp));
    printf("\nThe bottom most value of this stack is %d\n", stackBottom(sp));

    return 0;
}
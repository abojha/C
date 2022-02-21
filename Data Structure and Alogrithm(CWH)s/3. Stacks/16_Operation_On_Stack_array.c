#include<stdio.h>
#include<stdlib.h>

struct stacks{
    int top;
    int size;
    int *arr;
};
int isFull(struct stacks *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stacks *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
void push(struct stacks *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stacks *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;

    }
}
int main()
{
    struct stacks *s;
    s = (struct stacks*)malloc(sizeof(struct stacks));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before Pushing Empty: %d\n", isEmpty(s));
    printf("Before Pushing Full: %d\n", isFull(s));
    push(s,56);
    push(s,5);
    push(s,46);
    push(s,76);
    push(s,86); //PUshed 5 Elements
    push(s,96); //this will not push because size is 5
    printf("After Pushing Empty: %d\n", isEmpty(s));
    printf("After Pushing Full:%d\n", isFull(s));

    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));
    


    return 0;
}
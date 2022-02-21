#include<stdio.h>
#include<stdlib.h>
typedef struct stacks{
    int top;
    int size;
    int *arr;
} st;
int isEmpty(st *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(st *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(st * s, int data)
{
    if(isFull(s))
    {
        printf("can't push stack overflow");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
        printf(" %d Pushed successfully:\n",data);
    }
}
void pop(st * s)
{
    if(isEmpty(s))
    {
        printf("can't pop because stack underflow");
    }
    else
    {
        int data;
        data = s->arr[s->top];
        s->top--;
        printf("%d popped successfull\n",data);
    }
}
int peek(st * s, int i)
{
    int arrInd = s->top - i + 1;
    if(arrInd<0)
    {
        printf("Invalid!!!!!!");
    }
    else
    {
        return s->arr[arrInd];
    }
}
int stackTop(st * s)
{
    return s->arr[s->top];
}
int stackBottom(st * s)
{
    return s->arr[0];
}
int main()
{
    st *s;
    s = (st *)malloc(sizeof(st));
    s->top = -1;
    s->size = 50;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s,5);
    push(s,512);
    push(s,13);

    printf("The top most element of stack is %d\n", stackTop(s));
    printf("The bottom most element of stack is %d\n", stackBottom(s));
    
    


    
    return 0;
}
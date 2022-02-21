#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int isEmpty(struct Node *top)
{
    if(top == NULL)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Node *top)
{
    struct Node *p =(struct Node *)malloc(sizeof(struct Node));
    if(p == NULL)
    {
        return 1;
    }
    return 0;
}
struct Node * push(struct Node *top, int x)
{
    if(isFull(top))
    {
        printf("Stack overflow");
    }
    if(!isFull(top))
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
void print(struct Node *top)
{
    while(top!=NULL)
    {
        printf("%d ",top->data);
        top = top->next;
    }
    printf("\n");
}
int pop(struct Node **top)
{
    int x;
    struct Node *n;
   n = *top;
   x = (*top)->data;
   *top = (*top)->next;
   free(n);
   return x;
}
int peek(int pos, struct Node *top)
{
    struct Node *ptr;
    ptr = top;
    for(int i = 0; (i<pos-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }

}
int stackTop(struct Node *top)
{
    return top->data;
}
int stackBottom(struct Node *top)
{
    struct Node *ptr = top;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}
int main()
{
    int element;
    struct Node *top;
    top = NULL;
    top = push(top,78);
    top = push(top,56);
    top = push(top,22);

    print(top);

    element = pop(&top);
    print(top);

    printf("%d ",peek(1,top));
    printf("%d ",stackBottom(top));
    printf("%d ",stackTop(top));
    return 0;
}
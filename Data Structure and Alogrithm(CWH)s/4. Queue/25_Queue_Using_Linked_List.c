#include<stdio.h>
#include<stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if(f == NULL)
        {
            f = r =  n;
        }
        else
        {
            r->next = n;
            r=n;
        }

    }
}
void printing(struct Node *ptr)
{   while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
}
}
int dequeue()
{
    if(f == NULL)
    {
        printf("queue Underflow\n");
    }
    else
    {
        int val;
        struct Node *ptr;
        ptr = f;
        f = f->next;
        val = ptr->data;
        free(ptr);

    }
}
int main()
{
    
    enqueue(34);
    enqueue(6);
    enqueue(9);
    printing(f);
    dequeue();
    dequeue();
    printing(f);
    return 0;
}
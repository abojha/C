#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prevNode;
    struct Node *nextNode;
};

void print_forward(struct Node *head)
{
    struct Node *p;
    p = head;

    do
    {
        printf("%d ",p->data);
        p = p->nextNode;
    }while(p->nextNode!=NULL);

    printf("%d",p->data);

    printf("\n");
    do{
        printf("%d ",p->data);
        p = p->prevNode;
    }while(p!=NULL);

}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 100;
    head->prevNode = NULL;
    head->nextNode = second;

    second->data = 200;
    second->prevNode = head;
    second->nextNode = third;

    third->data = 300;
    third->prevNode = second;
    third->nextNode = fourth;

    fourth->data = 400;
    fourth->prevNode = third;
    fourth->nextNode = fifth;

    fifth->data = 500;
    fifth->prevNode = fourth;
    fifth->nextNode = sixth;

    sixth->data = 600;
    sixth->prevNode = fifth;
    sixth->nextNode = NULL;

    print_forward(head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

void printing(struct Node *ptr)
{   while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
}
}
struct Node * DelitionAtStart(struct Node * head)
{
    struct Node *p;
    struct Node *q;

    p = head;
    q = head->next;

    p = q;
    free(q);
    return p;
}
struct Node * DelitionAtEnd(struct Node * head)
{
    struct Node *p;
    struct Node *q;

    p = head;
    q = head->next;

    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;

}
struct Node * DeletionAtIndex(struct Node * head, int index)
{
    struct Node *p;
    struct Node *q;
    int i = 0;
    p = head;
    q = head->next;

    for(i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;

}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node*));
    second = (struct Node *)malloc(sizeof(struct Node*));
    third = (struct Node *)malloc(sizeof(struct Node*));

    head->data = 17;
    head->next = second;
    
    second->data= 19;
    second->next = third;

    third->data = 21;
    third->next = NULL; 
    printing(head);
    //head = DelitionAtStart(head);
    //head = DelitionAtEnd(head);
    head = DeletionAtIndex(head,1);
    printing(head);
    
    return 0;
}
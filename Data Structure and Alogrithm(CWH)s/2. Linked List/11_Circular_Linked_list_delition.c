#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void printf_a_linked_list(struct Node * head)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    while(ptr->next != head)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n",ptr->data);
}
struct Node * DeletionAtEnd(struct Node *head)
{
    struct Node *p;
    struct Node *q;

    p = head;
    q = head->next;
    while(q->next!=head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node * DeletionAtFirst(struct Node *head)
{
    struct Node *p;
    struct Node *q;
    p = head;
    q = head->next;

    while(q->next!= head)
    {
       
        q = q->next;
    }
    q->next = p->next;
    head = p->next;
    free(p);
    return head;

    
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 35;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 55;
    third->next = head;

    printf_a_linked_list(head);
    //head = DeletionAtEnd(head);
    head = DeletionAtFirst(head);
    printf_a_linked_list(head);
    return 0;
}
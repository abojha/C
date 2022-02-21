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

struct Node * DeletionAtFirst(struct Node * head)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node* DeletionAtIndex(struct Node *head, int index)
{
    struct Node *p;
    struct Node *q;
    p = head;
    q = head->next;
    int i = 0;
    while(i != index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    
   
    p->next = q->next;;
    free(q);
    return head;
}
struct Node * DeletionAtEnd(struct Node *head)
{
    struct Node *p;
    struct Node *q;
    p = head;
    q = head->next;

    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
    
}
struct Node * DeletionAtValue(struct Node * head, int value)
{
    struct Node *p;
    struct Node *q;
    p = head;
    q = head->next;

    while(q->data!=value && q->next != NULL)
    {
        p = p->next; 
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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
    printf("................\n");
    //head = DeletionAtFirst(head);
    head = DeletionAtIndex(head,1);
    //head = DeletionAtEnd(head);
    //head = DeletionAtValue(head,21);
    printing(head);
    
    
    return 0;
}
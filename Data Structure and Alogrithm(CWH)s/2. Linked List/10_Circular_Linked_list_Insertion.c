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
struct Node * InsertAtEnd(struct Node * head, int data)
{
    struct Node * Current_Node;
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));

    Current_Node = head;
    while(Current_Node->next != head)
    {
        Current_Node = Current_Node->next;
    }
    ptr->data = 100;

    ptr->next = head;
    Current_Node->next = ptr;

    return head;
}
struct Node * InsertAtbeginning(struct Node * head, int data)
{
    struct Node * current_node;
    struct Node * ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    current_node = head;
    while(current_node->next != head)
    {
        current_node = current_node->next;
    }
    ptr->data = data;
    current_node->next = ptr;
    ptr->next = head;
    return ptr;
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
    head = InsertAtbeginning(head,2000);
    printf_a_linked_list(head);

    return 0;
}
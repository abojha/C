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
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("%d",ptr->data);
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

    printf_a_linked_list(third);
    return 0;
}
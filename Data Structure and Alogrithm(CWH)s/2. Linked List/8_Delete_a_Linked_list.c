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
struct Node * Delete_whole_list(struct Node *head)
{
    struct Node *iterator;
    struct Node *auxillay_node;

    iterator = head;
    while(iterator){
        auxillay_node = iterator->next;
        free(iterator);

        iterator = auxillay_node;
        
        printf("We have successfully deleted the list\n");
        head = NULL;
        return head;
    }
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
    head = Delete_whole_list(head);
    //printing(head);

    
    return 0;
}
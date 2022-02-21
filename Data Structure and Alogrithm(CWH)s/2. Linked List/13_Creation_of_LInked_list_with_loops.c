#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *create_a_Linked_list(int n)
{
    struct Node *head= NULL;
    struct Node *p = NULL;
    struct Node *temp = NULL;
    for(int i = 0; i < n; i++)
    {
        //create an individual Node
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the data:");
        scanf("%d",&temp->data);
        temp->next = NULL;
    
    if(head == NULL) //if list is empty
    {
        head = temp;
    }
    else{
        p = head;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    }
    return head;
   
}
void Display(struct Node *head)
{
    struct Node *p = head;
    while(p!= NULL)
    {
        printf("\t%d",p->data);
        p = p->next;
    }
}

int main()
{
    int n = 0;
    struct Node *Head = NULL;
    printf("How many Nodes\n");
    scanf("%d",&n);
    Head = create_a_Linked_list(n);
    Display(Head);
    
    return 0;
}
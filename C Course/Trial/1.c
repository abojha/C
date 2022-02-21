#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node *next;
};
void printing(struct Node *ptr)
{
   while(ptr!=NULL)
   {
      printf("%d\n",ptr->data);
      ptr = ptr->next;
   }
}
struct Node * InsertionAtFirst(struct Node *head, int data)
{
   struct Node * ptr;
   ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = 23;
   ptr->next = head;
   return ptr;
}
struct Node * InsertionAtIndex(struct Node *head, int data, int index)
{
   struct Node *ptr;
   struct Node *p;
   p = head;
   int i=0;
   ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;
   while(i!=index-1)
   {
      p = p->next;
      i++;
   }
   ptr->next = p->next;
   p->next = ptr;
   return head;
}
struct Node * InsertionAtLast(struct Node * head, int data)
{
   struct Node *ptr;
   ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node *p;
   p = head;
   ptr->data = data;
   while(p->next!=NULL)
   {
      p = p->next;
   }
   p->next = ptr;
   ptr->next = NULL;
   
   return head;
}

int main()
{
   struct Node *head;
   struct Node *second;
   struct Node *third;

   third = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   head = (struct Node *)malloc(sizeof(struct Node));

   head->data = 17;
   head->next = second;

   second->data = 19;
   second->next = third;

   third->data = 21;
   third->next = NULL;

   printing(head);
   printf("..........................\n");
  // head = InsertionAtFirst(head,23);
  //head = InsertionAtIndex(head,222,2);
  head = InsertionAtLast(head,2200);
   printing(head);
   
   return 0;
}
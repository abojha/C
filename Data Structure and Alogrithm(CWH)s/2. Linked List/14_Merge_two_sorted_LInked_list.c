#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *Create_a_Linked_List(int &n)
{
    struct Node *temp = NULL;
    struct Node *head = NULL;
    struct Node *p = NULL;

    for (int i = 0; i < n; i++)
    {
        temp = new struct Node();
        cout << "Enter the data:";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}
void printing(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "\t";
        head = head->next;
    }
    cout << endl;
}
struct Node *Merge_two_sorted_linked_list(struct Node *list1, struct Node *list2)
{
    struct Node *newNode;
    newNode = new struct Node();
    struct Node *temp;
    temp = newNode;
    newNode->next = NULL;

    while(list1!= NULL && list2!= NULL)
    {
        if(list1->data<=list2->data)
        {
            temp->next = list1;
            temp = temp->next;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        }
    }
    if(list1!=NULL)
    {
        temp->next = list1;
    }
    else
    {
        temp->next = list2;
    }
    temp = newNode->next;
    free(newNode);
    return temp;

}
int main()
{
    int n1, n2;
    struct Node *head1;
    struct Node *head2;
    struct Node *merginglist;
    cout << "Enter the size of list 1:\n";
    cin >> n1;
    cout << "Enter the size of list 2:\n";
    cin >> n2;
    head1 = Create_a_Linked_List(n1);
    head2 = Create_a_Linked_List(n2);
    printing(head1);
    printing(head2);

    merginglist = Merge_two_sorted_linked_list(head1,head2);
    printing(merginglist);


    return 0;
}
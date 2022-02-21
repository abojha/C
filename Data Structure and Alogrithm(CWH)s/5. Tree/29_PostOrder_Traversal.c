#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *Create_Node(int data)
{
    struct Node *N;
    N = (struct Node *)malloc(sizeof(struct Node));
    N->data = data;
    N->left = NULL;
    N->right = NULL;
    return N;
}
void postorder(struct Node *root)
{
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\n",root->data);
  
}
int main()
{
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;

    p1 = Create_Node(3); 
    p2 = Create_Node(5);
    p3 = Create_Node(7);

    p1->left = p2;
    p1->right = p3;
    postorder(p1);
    return 0;
}
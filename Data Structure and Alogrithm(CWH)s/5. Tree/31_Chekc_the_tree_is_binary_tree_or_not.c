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
int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main()
{
    struct Node *p1;
    struct Node *p2;
    struct Node *p3;

    p1 = Create_Node(3); 
    p2 = Create_Node(2);
    p3 = Create_Node(7);

    p1->left = p2;
    p1->right = p3;
    if(isBST(p1) == 1)
    {
        printf("BST");
    }
    else
    {
        printf("NOt");
    }
    return 0;
}
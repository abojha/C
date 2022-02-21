#include<stdio.h>
#include<stdlib.h>
struct avltree
{
    int value;
    struct avltree *left;
    struct avltree *right;
    int height;
};
int max(int a, int b)
{
    return ((a>b)?a:b);
}
int getHeight(struct avltree *n)
{
    if(n == NULL)
    {
        return 0;
    }
    return n->height;
}
struct avltree *createNode(int key)
{
    struct avltree *node = (struct avltree *) malloc (sizeof(struct avltree));
    node->value = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
int getBalancefactor(struct avltree *n)
{
    if(n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}
struct avltree *leftrotate(struct avltree *y)
{
    struct avltree *x = y->left;
    struct avltree *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    return x;
}
struct avltree *rightrotate(struct avltree *x)
{
    struct avltree *y = x->right;
    struct avltree *T2 = y->left;
    y->left = x;
    x->right = T2;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    return y;
}
struct avltree *insert(struct avltree *node, int key)
{
    if(node == NULL)
    {
        return createNode(key);
    }
    if(key < node->value)
    {
        node->left = insert(node->left, key);
    }
    else if(key > node->value)
    {
        node->right = insert(node->right, key);
    }
    return node;
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalancefactor(node);

    //Left Left Case
    if(bf>1 && key < node->left->value)
    {
        rightrotate(node);
    }
    //Right Right Case
    if(bf< -1 && key > node->right->value)
    {
        leftrotate(node);
    }
   //left right case
    if(bf > 1 && key > node->left->value)
    {
        node->left = leftrotate(node->left);
        rightrotate(node);
    }
    //Right Left Case
    if(bf < -1 && key < node->right->value)
    {
        node->right = rightrotate(node->right);
        leftrotate(node);
    }
    return node;
}
int main()
{
    struct avltree *root = NULL;
    root = insert(root, 45);
    root = insert(root, 6);
    root = insert(root, 10);
    root = insert(root, 12);
    root = insert(root, 24);
    root = insert(root, 22);
    root = insert(root, 13);
    
    return 0;
}
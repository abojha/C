#include <stdio.h>
#include <stdlib.h>
struct tree {

    int data;
    struct tree *left;
    struct tree *right;
};

struct tree * create_a_node (int n) {

    struct tree *Node;
    Node = (struct tree*) malloc (sizeof (struct tree) );
    Node->data = n;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}

struct tree * Search (struct tree *root, int key) {

    if (root == NULL)
        return NULL;

    if (root->data == key) {
        return root;
    }

    else if (root->data > key) {
        return Search (root->left, key);
    }

    else {
        return Search (root->right, key);
    }
}     
                                                                                                                    
int main() {

    struct tree *p1;
    struct tree *p2;
    struct tree *p3;
    struct tree *p4;
    struct tree *p5;
    struct tree *p6;
    struct tree *p7;

    p1 = create_a_node(23);
    p2 = create_a_node(20);
    p3 = create_a_node(25);

    p1->left = p2;
    p1->right = p3;

   struct tree * n = Search(p1, 31);

   if(n != NULL) {
       printf("Found : %d", n->data);
   }

   else {
       printf("Element Not found\n");
   }
    
    return 0;
}
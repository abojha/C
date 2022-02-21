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

void Insert (struct tree *root, int key) {
    struct tree *prev = NULL;
    while (root != NULL) {
        prev = root;
        if(root->data == key) {
            return;
        }
        else if (root->data > key) {
            root = root->left;
        }
        else {
            root = root->right;
        }
    }
    struct tree *new = create_a_node(key);
    if (key < new->data) {
        prev->left = new;
    }
    else {
        prev->right = new;
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

    Insert(p1,15);

   printf("%d", p1->left->right->data);
    
    return 0;
}  
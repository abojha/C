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
struct tree *inorderpredecessor(struct tree *root) {
    root = root->left;
    while(root->right != NULL) {
        root = root->right;
    }
    return root;
}
struct tree *delete_node(struct tree *root, int value) {
    struct tree *ipre;
    if(root == NULL) {
        return NULL;
    }
    if(root->right == NULL && root->left == NULL) {
        free(root);
        return NULL;
    }
    //search for the node to be deleted
    if(value < root->data) {
        root->left = delete_node(root->left,value);
    }
    else if(value > root->data) {
        root->right = delete_node(root->right,value);
    }
    //deletion strategy
    else {
        ipre = inorderpredecessor(root);
        root->data = ipre->data;
        root->left = delete_node(root->left, ipre->data);
    }
}
void inorder(struct tree *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
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
    inorder(p1);
    delete_node(p1,25);
    inorder(p1);
    
    return 0;
}  
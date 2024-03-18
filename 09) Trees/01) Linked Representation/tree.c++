#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n;    // creating a node pointer
    n = (struct node *) malloc (sizeof(struct node));  // Allocating memory in the heap
    n->data = data;  // Setting the data
    n->left = NULL;  // Setting the left and right children to NULL
    n->right = NULL;
    return n;
}

int main(){
    // Constructing the node
    struct node *p = createNode(1);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(3);

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;

    return 0;
}



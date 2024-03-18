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

// Pre-order function
void preOrder(struct node* root){
    if(root!=NULL){
        cout<< root->data << "\t";
        preOrder(root->left);
        preOrder(root->right);
    }

}

int main(){
    // Constructing the node
    struct node *p = createNode(1);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(5);

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    // Tree looks like :
    //        1
    //       / \
    //      2   3     => ( 1 2 4 5 3 )  & Pre-Order : Firstly select the left side elements , then select right side elements
    //    /  \
    //   4    5
     
    preOrder(p); 
    return 0;
}



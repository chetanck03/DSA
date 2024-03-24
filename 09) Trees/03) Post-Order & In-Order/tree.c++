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

// Pre-order function : Root -> Left -> Right
void preOrder(struct node* root){
    if(root!=NULL){
        cout<< root->data << "\t";
        preOrder(root->left);
        preOrder(root->right);
    }

}
// Post-order function : Left -> Right -> Root
void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<< root->data << "\t";
    }

}
// In-order function : Left -> Root -> Right
void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        cout<< root->data << "\t";
        InOrder(root->right);
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
    //      2   3
    //    /  \
    //   4    5
    cout<< "Pre-Order : ";  // 1 2 4 5 3  (Root -> Left -> Right)
    preOrder(p); 
    cout<<endl;

    cout<< "Post-Order: "; // 4 5 2 3 1  (Left -> Right->Root)
    postOrder(p); 
    cout<<endl;

    cout<< "In-Order : ";  // 4 2 5 1 3  (Left ->Root -> Right)
    InOrder(p); 
    return 0;
}



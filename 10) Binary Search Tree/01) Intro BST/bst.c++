// BST : (Binary Search Tree)
// 1) Left subtree are lesser from all nodes
// 2) Right subtree are greater from all nodes
// 3) No duplicate nodes allowed
// 4) In order Traversal gives an ascending sorted array

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


// In-order function : Left -> Root -> Right
void InOrder(struct node* root){
    if(root!=NULL){
        InOrder(root->left);
        cout<< root->data << "\t";
        InOrder(root->right);
    }

}

// Logic for checking BST
int bst(struct node* root){
    static struct node *prev = NULL ; // Initializing previous as NULL when we start

    if (root != NULL ){

        if(!bst(root->left)) return 0;

        if(prev!=NULL && root->data <= prev->data) return 0;

        prev = root;
        return bst(root->right);
    }else{
        return 1;
    }
        
}
int main(){
    // Constructing the node
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    // Tree looks like :
    //        5
    //       / \
    //      3   6
    //    /  \
    //   1    4
   

    cout<< "In-Order : ";  // 1 3 4 5 6 (Left ->Root -> Right)
    InOrder(p); 

    cout<<endl;

    if(bst(p)) cout<<"This is a Binary Search Tree";
    else cout<<"This is not a Binary Search Tree";

    return 0;
}



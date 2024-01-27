#include<iostream>
#include<stdlib.h>
using namespace std;

// Global variables
struct Node *f = NULL;  // front
struct Node *r = NULL;  // rear

struct Node{
    int data;
    struct Node *next;
};

// Printing the element
void list(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Element: "<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}

// inserting element using Queue in Linked List
void enqueue(int val){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    if(n==NULL) cout<<"Queue is full";
    else{
        n->data=val;
        n->next =NULL;

// front and rear
        if(f==NULL) f=r=n;
        else{
            //Logic
            r->next=n;
            r=n;
        }

    }

}
// deleting element using Queue in Linked List
int dequeue(){
    int val=-1;
    struct Node *ptr =f;

    if(f==NULL) cout<<"Queue is Empty\n";
    else{
        // Logic
        f=f->next;  //  struct Node *ptr =f;
        val =ptr->data;
        free(ptr);
    }
    return val;
}

int main(){

    cout<<"Enqueued Elements Using Linked List are :\n";
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    list(f);

    cout<<"Dequeued Elements Using Linked List are :\n";
    dequeue();
    dequeue();
    list(f);

}
























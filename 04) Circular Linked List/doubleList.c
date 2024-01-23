#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};


void list(struct Node *ptr){
    while(ptr != NULL){
        printf("Elements: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate Memory for nodes in the linked list in heap( Dynamically Memory)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data=7;
    head->next=second;
    head->prev=NULL;

    // Link second and third nodes
    second->data=8;
    second->next=third;
    second->prev=NULL;


    // Link third 
    third->data=22;
    third->next=NULL;
    third->prev=second;

    list(head);
}







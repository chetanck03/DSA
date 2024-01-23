#include<stdio.h>
#include<stdlib.h>

// linked list basics syntax
struct Node{
    int data;
    struct Node *next;
};

// Display Elements
void list(struct Node *ptr){
    while(ptr != NULL){
        printf("Elements: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

// Insert a element after the node
struct Node *insert(struct Node *head,struct Node *prevNode,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    // declare a variable data
    ptr-> data = data;
    
    // change the position logic
    ptr->next = prevNode->next;
    // give the  position
    prevNode->next=ptr;

    return head;
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

    // Link second and third nodes
    second->data=11;
    second->next=third;

    // Terminate the list at second node
    third->data=110;
    third->next=NULL;

    // Call the function
    printf("Elements are : \n");
    list(head);

    printf("New Elements are : \n");

    // Insert a element after the second node
    head = insert(head,second,56);
    list(head);

    return 0;
}
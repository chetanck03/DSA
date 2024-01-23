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

// Insert a element at the end
struct Node *insert(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));

    // declare a variable of head and data
    struct Node *p = head;
    ptr-> data = data;
    
    // logic
    while(p->next!=NULL){
        p=p->next;
    }
    
    // change the position logic
    p->next = ptr;
    // give the first position
    ptr->next=NULL;

    return head;
}

int main(){

    struct Node *head;
    struct Node *second;

    // Allocate Memory for nodes in the linked list in heap( Dynamically Memory)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data=7;
    head->next=second;

    // Terminate the list at second node
    second->data=11;
    second->next=NULL;

    // Call the function
    printf("Elements are : \n");
    list(head);

    printf("New Elements are : \n");

    // Insert a element at the end
    head = insert(head,56);
    list(head);

    return 0;
}
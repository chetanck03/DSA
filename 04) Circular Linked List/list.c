#include<stdio.h>
#include<stdlib.h>

// linked list basics syntax
struct Node{
    int data;
    struct Node *next;
};

// Display Elements
void list(struct Node *head){
    struct Node *ptr = head;

    do {
        printf("Elements is :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
  
}

// Insert the element at the beginning
struct Node *insert(struct Node *head,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    // give the first position
    ptr->data=data;

    struct Node *p = head ->next;
    while(p->next != head){
        p=p->next;
    }

    // p to last node
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;

    return ptr;
}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate Memory for nodes in the linked list in heap( Dynamically Memory)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data=4;
    head->next=second;

    // Link second and third nodes
    second->data=3;
    second->next=third;

    // Link third and fourth nodes
    third->data=6;
    third->next=fourth;

    // Link fourth and first node
    fourth->data=1;
    fourth->next=head;

    // Call the function
    printf("Circular linked list elements are :\n");
    list(head);

    printf("Circular Inserted linked list elements are :\n");
    head = insert(head,54);
    head = insert(head,53);
    list(head);
    return 0;
}
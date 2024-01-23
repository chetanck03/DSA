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

// Case 1 : Deleting the First Element

struct Node *delFirst(struct Node*head){
    struct Node *ptr = head;

    head = head->next;
    free(ptr);

    return head;
}

// Case 2 : Deleting the Element at a node (index)

struct Node *delIndex(struct Node*head, int index){
    struct Node *p = head;
    struct Node *q = head->next;

    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

// Case 3 : Deleting the Last Element 

struct Node *delLast(struct Node*head){
    struct Node *p = head;
    struct Node *q = head->next;

    while(q->next !=NULL){
        p=p->next;
        q=q->next;
    }

    p->next = NULL;
    free(q);

    return head;
}

// Case 4 : Deleting the Element with a given value

struct Node *delValue(struct Node*head, int value){
    struct Node *p = head;
    struct Node *q = head->next;

    while(q->data != value && q->next != NULL){
        p=p->next;
        q=q->next;
    }

    if(q->data == value){
        p->next=q->next;
        free(q);
    }

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
    second->data=8;
    second->next=third;

    // Terminate the list at third node
    third->data=22;
    third->next=NULL;

    // Call the function
    printf("Before Deletion: \n");
    list(head);

    // Case 1

    printf("Case 1 Deletion of First Element: \n");
    head= delFirst(head);
    list(head);

    // Case 2
    
    // printf("Case 2 Deletion of index Element: \n");
    // head= delIndex(head,1);
    // list(head);
  
    // Case 3

    // printf("Case 3 Deletion of Last Element: \n");
    // head= delLast(head);
    // list(head);
  
    // Case 4

    // printf("Case 4 Deletion of Value Element: \n");
    // head= delValue(head,8);
    // list(head);

    return 0;
}


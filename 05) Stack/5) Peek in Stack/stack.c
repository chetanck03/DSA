#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// full function
int full(struct Node *top){
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

// push function for stack
struct Node *push(struct Node *top,int x){
    if(full(top)){
        printf("Stack Overflow\n");
    }else{
        // n is new stack element
        struct Node *n=(struct Node*)malloc(sizeof(struct Node));

        n->data=x;
        n->next=top;
        top=n;

        return top;
    }
}

// Peek Function
int peek(int position){
    struct Node *ptr = top;

    for(int i =0;(i<position-1 && ptr !=NULL);i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);

    for(int i=1;i<=3;i++){
        printf("Value at position %d is :%d\n",i,peek(i));
    }
}










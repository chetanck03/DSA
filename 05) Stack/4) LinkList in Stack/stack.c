#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// for the pop function in the top declare globally variable
struct Node *top = NULL;

// Print the Elements
void list (struct Node*ptr){
    while(ptr !=NULL){
        printf("Elements is :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
// empty function
int emp(struct Node *top){
    if(top==NULL)
        return 1;
    else
        return 0;
    
}

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

// pop function

int pop(struct Node *tp){
    if(emp(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node *n =tp;
        top= (tp)->next;

        int x = n->data;
        free(n);

        return x;
    }
}


int main(){

    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    top = push(top,5);
    list(top);


    for(int i=1;i<=2;i++){

    printf("Popped element is %d\n",pop(top));
     }

    list(top);
    return 0;

}






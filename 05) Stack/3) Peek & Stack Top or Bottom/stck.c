#include<stdio.h>
#include<stdlib.h>

// Stack
struct stack{
    int size;
    int top;
    int *arr;
};

// empty function
int emp(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

// full function
int full (struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }

}

// Push Function
void push(struct stack *ptr,int val){
    if(full(ptr)){
      printf("Stack Overflow ! cannot push %d to the stack \n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}


// 1) peek = returns the topMost element
int peek(struct stack* sp ,int i){

    int a = sp->top-i +1 ; //logic returns element

    if(a<0){
        printf("Not a valid position for the Stack\n");
        return -1;
    }
    else{
        return sp->arr[a];
    }
}

// 2) stackTop = show the top values
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

// 2) stackBottom = show the bottom values
int stackBottom(struct stack* sp){
    return sp->arr[0];
}



int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;   // index value like in array
    sp->arr = (int *) malloc(sp->size * sizeof(int));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4); // Pushed 4 values
    push(sp,5); // Stack OverFlow

//show the values in the stack using peek
 for(int j =1; j<=sp->top+1;j++){
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }

// value of top or bottom
    printf("The top most value of this stack is %d\n",stackTop(sp));
    printf("The bottom most value of this stack is %d\n",stackBottom(sp));
    return 0 ;
}


















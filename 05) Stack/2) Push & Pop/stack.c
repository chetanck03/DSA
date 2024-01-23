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

// Pop Function
int pop(struct stack *ptr){
    if(emp(ptr)){
      printf("Stack underflow ! cannot pop %d to the stack \n");
      return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;   // index value like in array
    sp->arr = (int *) malloc(sp->size * sizeof(int));

    printf("Before Pushing , Full : %d\n",full(sp));
    printf("Before Pushing , Empty : %d\n",emp(sp));

    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4); // Pushed 4 values
    push(sp,5); // Stack OverFlow

    printf("After Pushing , Full : %d\n",full(sp));
    printf("After Pushing , Empty : %d\n",emp(sp));

    //Pop
    printf("Popped %d from the stack\n",pop(sp)); //Last In First Out
    printf("Popped %d from the stack\n",pop(sp)); //Last In First Out

    return 0 ;
}


















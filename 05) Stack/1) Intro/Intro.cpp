#include<iostream>
#include<stdlib.h>

using namespace std;
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

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));


    struct stack *s;
    s->size = 80;
    s->top = -1;   // index value like in array
    s->arr = (int *) malloc(s->size * sizeof(int));

    // Pushing element
    s->arr[0] = 7;
    s->top++;


    if(emp(s)){
        // printf("The stack is empty");
        cout<<"The stack is empty";
    }else{
        // printf("The stack is not empty");
        cout<<"The stack is not empty";

    }

    return 0 ;
}


















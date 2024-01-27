#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct stack{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}

int emp(struct stack *ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}

int full(struct stack *ptr){
    if(ptr->top== ptr->size-1) return 1;
    else return 0;
}

// Push Function
void push (struct stack *ptr, char val){
    if(full(ptr)){
        cout<<"Stack Overflow! cannot push from to the stack\n",val;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop Function
char pop(struct stack* ptr){
    if(emp(ptr)){
        cout<<"Stack underflow! cannot pop from stack\n";
        return -1;
    }else{
        char val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// which has more important
int match(char a){

    if(a=='*' || a=='/') return 3;
    else if(a=='+' || a=='-') return 2;
    else return 0;
}

// Operators
int op (char ch){
    if(ch=='+'|| ch=='-'|| ch=='*'|| ch=='/') return 1;
    else return 0;
}

// Infix to Postfix
char* IP(char * infix){
    // Create & Initialize the stack
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (char*)malloc (sp->size*sizeof(char));
    char* postfix =(char* ) malloc ((strlen(infix)+1)* sizeof(char));

    int i=0; // Track infix traversal
    int j=0; // Track postfix traversal

    // Logic

    while(infix[i]!='\0'){
        if(!op(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }else{
        //   More importance in infix
            if(match(infix[i]) > match(stackTop(sp))){
                push(sp,infix[i]);
                i++;
            }else{
                // in postfix
                postfix[j] =pop(sp);
                j++;
            }
        }

    }
    
    while(!emp(sp)){
        postfix[j] =pop(sp);
        j++;
    }
    postfix[j] ='\0';
    return postfix;
}

int main(){
    char* infix = "x-y/z-k*d";
    cout<<"Postfix is :  " <<IP(infix);

    return 0;
}













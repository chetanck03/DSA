#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
    int size;
    int top;
    char *arr;
};

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
        cout<<"Stack Overflow! cannot push %d to the stack",val;
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop Function
char pop(struct stack *ptr){
    if(emp(ptr)){
        cout<<"Stack underflow! cannot pop %d to the stack";
    }else{
        char val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

// Match the brackets
int match(char a, char b){

    if(a=='(' && b==')') return 1;
    else if(a=='{' && b=='}') return 1;
    else if (a=='[' && b==']') return 1;

    return 0;
}

// parenthesis
int par(char * exp){
    // Create & Initialize the stack
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size=100;
    sp->top=-1;
    sp->arr = (char*)malloc (sp->size*sizeof(char));
    char popped;

    // Logic
    for(int i=0;exp[i]!='\0';i++){ // "\0" = NULL

      if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
        push(sp,exp[i]);
      }
      else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
        if(emp(sp)) return 0;

        popped = pop(sp);
        if(!match(popped,exp[i])) return 0;
       
      }
    }

 // Checking not empty
    if(emp(sp)) return 1;
    else return 0;
    
}

int main(){
    char* exp = "[4-6]((8){(9-8)})";

    if(par(exp)) cout<<"The Parenthesis is Balanced";
    else cout<<"The Parenthesis is Unbalanced";

    return 0;
}













#include<iostream>
#include<stdlib.h>
using namespace std;

// Queue : First In First Out
struct queue{
    int size;
    int f;//front element
    int r;//rare element
    int *arr;
};

// empty function
int emp(struct queue *q){
    if(q->r==q->f)  return 1;
    else return 0;
}
// full function
int full(struct queue *q){
    if(q->r==q->size-1)  return 1;
    else return 0;
}

// enqueue : inserting element
void enqueue(struct queue *q,int val){
    if(full(q)) cout<<"This Queue is full\n";
    else{
        q->r++;
        q->arr[q->r] = val;
        cout<<"Enqueued Element : "<< val<<endl;
    }
}

// dequeue : deleting element
int dequeue(struct queue *q){
    int a= -1;

    if(emp(q))  cout<<"This Queue is empty\n";
    else{
        q->f++;
        a=q->arr[q->f];
        cout<<"Dequeued Element : "<<a<<endl;
    }
    return a;

}

int main(){
    struct queue q;
    q.size = 5; //size
    q.f=q.r=-1; // 0 position element
    q.arr=(int*)malloc(q.size*sizeof(int));

    // Enqueue
    cout<<"Enqueue Elements are :\n";
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);

    // Dequeue
    cout<<"Dequeue Elements are :\n";
    dequeue(&q);
    dequeue(&q);

}


















#include<stdio.h>

void display(int arr[], int n){
    // Code For Traversal
    for(int i=0;i<n;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int del ( int arr[], int size, int index){
    // Code For deletion
    for(int i = index;i<size-1;i++){     //  0 ; 0<5 ; 1
        arr[i]=arr[i+1];                 //  0 index = 8 (1 index)   for fist loop
    }                                    //  1 index = 12 (2 index)  for second loop
                                         //  2 index = 27 (3 index)  for third loop 
                                         //  3 index = 88 (4 index)  for fourth loop 
}

int main(){
    int arr[100] ={7,8,12,27,88};
    int size =5,index=0;

    printf("Values are : ");
    display(arr,size);
    del(arr,size,index);

    size-=1;
    printf("New Values are : ");
    display(arr,size);
    return 0;
}
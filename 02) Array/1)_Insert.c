#include<stdio.h>

void display(int arr[], int n){
    // Code For Traversal
    for(int i=0;i<n;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int insert ( int arr[], int size, int element, int capacity,int index){
    // Code For Insertion
    if(size>=capacity){
        printf("Insertion Failed...!!\n");
    }else{
         printf("Inserted Successfully...!!\n");
    }

    for(int i=size-1 ; i>=index ; i-- ){  // 4 ; 4>=3 ; 3
        arr[i+1]=arr[i];                  // 5 index = 88 (4 index)   ,  for first loop
    }                                     // 4 index = 27 (3 index)   ,  for second loop
    arr[index] = element;  // 3 index = 45
    return 1;
}

int main(){
    int arr[100] ={7,8,12,27,88};
    int size =5, element=45,index=3;

    printf("Values are : ");
    display(arr,size);
    insert(arr,size,element,100,index);

    size+=1;
    printf("New Values are : ");
    display(arr,size);
    return 0;
}
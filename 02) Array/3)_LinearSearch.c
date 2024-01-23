#include<stdio.h>

int linear(int arr[] , int size , int element){

    for(int i=0; i<size;i++){    //0 ; 0<12 ; 1    (1st loop)

        if(arr[i]== element){    // arr[10] == 58  (11th loop)
            return i;            // 10
        }
    }
    return -1;
}

int main(){
    //Unsorted Array
    int arr[]={ 1,3,5,56,4,3,23,5,4,54634,58,34};
    int size = sizeof(arr)/sizeof(int);    // size = 12

    int element=58;
    int search = linear(arr,size,element);

    printf("The element %d was found at index %d \n",element,search);
    return 0 ;
}
#include<stdio.h>

int binary (int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;

    // Start Searching

    while(low<=high){
        mid=(low+high)/2;    // 1) mid = (0+8)/2 = 4 ,(second loop mid : (5+8)/2 = 6.5)...( fifth loop mid : (8+8)/2 = 8)

        if(arr[mid]==element){  // 3) arr[8] == 444
            return mid;         //    8
        }

        if(arr[mid]<element){    // 2) arr[4] < 444
            low=mid+1;           //    low = 5 ,6...8
        }else{
            high=mid-1;
        }
        
    }

    // Searching Ends
    return -1;
}

int main(){
    int arr[]={1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);    // size = 9

    int element=444;
    int search = binary(arr,size,element);

    printf("The element %d was found at index %d \n",element,search);
    return 0 ;
}












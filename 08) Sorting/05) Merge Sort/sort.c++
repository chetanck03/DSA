// Merge Sorting : Combining two or more similar records into a singe one

#include<iostream>
using namespace std;

void print(int *a ,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

// Logic 

void merge(int a[],int mid,int low,int high){
    int i,j,k,b[100];
    i=low;
    j=mid+1;
    // new array for b
    k=low;

    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;k++;
        }else{
            b[k]=a[j];
            j++;k++;
        }
    }

    while(i<=mid){
        b[k]=a[i];
        k++;i++;
    }

    while(j<=high){
        b[k]=a[j];
        k++;j++;
    }
// Copy the b array in the a array
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}

// Merging Sorting logic
void mergeSort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,mid,low,high);

    }
}


int main(){
    int a[] = {9,1,34,56,2,2356,89,98,123,10};
    int n=10;

    cout<<"Before Sorting : \n";
    print(a,n);
    cout<<"After Sorting : \n";
    mergeSort(a,0,9);
    print(a,n);

    return 0;
}
#include<iostream>
#include<limits.h>
using namespace std ;

void print(int *a ,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

// Finding maximum element
int maximum(int a[],int n){
  int maxi = INT_MIN;

  for(int i =0;i<n;i++){

    if(maxi<a[i]){
        maxi=a[i];
    }
  }
  return maxi;

}


// Logic

void sort(int *a,int n){
    int i,j;

    int max = maximum(a,n); // Find the maximum element in a
    int *count = (int*)malloc((max+1)*sizeof(int)); //Create the count array

// Initialize the array elements to zero
    for(int i =0;i<max+1;i++){
        count[i]=0;
    }
// Increment the corresponding index in the count array
    for(int i =0;i<n;i++){
        count[a[i]]= count[a[i]]+1;
    }

    i=0; //counter for count array
    j=0; //counter for given array A

// logic of sorting
  while(i<=max){
    if(count[i]>0){
        a[j]=i;
        count[i]= count[i]-1;
        j++;
    }
    else
    {
        i++;
    }
  }  
}

int main(){
    int a[] = {9,1,34,56,2,2356,89,98,123,10};
    int n=10;

    cout<<"Before Sorting : \n";
    print(a,n);
    cout<<"After Sorting : \n";
    sort(a,n);
    print(a,n);

    return 0;
}


















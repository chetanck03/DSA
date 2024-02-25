#include<iostream>
using namespace std;

// Printing the element
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

// Insertion Sorting Logic
void sort(int *a,int n){
    int element,j;

    for(int i=1;i<=n-1;i++) // Suppose first element is sorted
    {
        element=a[i];
        j=i-1;
        // Loop for each pass
        while(j>=0 && a[j]>element){
            a[j+1] = a[j]; // swapping
            j--;
        }
        a[j+1] = element;
    }
}

int main(){
    int a[]={12,13,1,56,578,90,333,76,12,76,7};
    int n=11;

    cout<<"Before Swapping : \n";
    print(a,n);
    sort(a,n);
    cout<<"After Swapping : \n";
    print(a,n);
    return 0;
}

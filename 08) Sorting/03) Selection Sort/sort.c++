#include<iostream>
using namespace std;

// Printing the element
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

// Selection Sorting Logic
void sort(int *a,int n){
    int index,temp;

    for(int i=0;i<n-1;i++)  //No. of elements index
    {  

        index= i;
        for(int j = i+1;j<n;j++) //Loop for each pass elements
        {
            if(a[j]<a[index]){
                index = j;
            }
        }
        // Swapping
        temp = a[i];
        a[i]=a[index];
        a[index] = temp;

      
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

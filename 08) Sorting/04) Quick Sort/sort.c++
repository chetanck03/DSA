#include<iostream>
using namespace std;

// Printing the element
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

// Partition
int partition (int a[], int low ,int high){
    int pivot = a[low] ; // pivot : starting point
    int i = low + 1 , j = high, temp;

    do{
        while(a[i]<=pivot){ //smaller < pivot
            i++;
        }
        while(a[j]>pivot){  // larger > pivot
            j--;
        }

        if(i<j){
            // Swapping
            temp =a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while(i<j);

    // Swap a[low] and a[j]
     temp = a[low];
     a[low] = a[j];
     a[j] = temp;

     return j;

}


// Quick Sorting Logic
void sort(int *a,int low, int high)
{
    int partitionIndex; //Index of pivot after partition

    if(low<high){
        partitionIndex = partition(a,low,high);
        sort(a,low,partitionIndex-1);//sort left subArray
        sort(a,partitionIndex+1,high);//sort left subArray
    }
      
}


int main(){
    int a[]={12,13,1,56,578,90,333,76,12,76,7};
    int n=11;

    cout<<"Before Swapping : \n";
    print(a,n);
    sort(a,0,n-1);
    cout<<"After Swapping : \n";
    print(a,n);
    return 0;
}

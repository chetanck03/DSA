#include<iostream>
using namespace std;

// Printing the elements
void print(int *a , int n){
    for(int i=0;i<n;i++){
        cout<<a[i] << "\t";
    }
    cout<<endl;
}

// Logic of bubble sorting : Printing the elements ascending to descending order
void sort(int *a,int n){
    int temp = 0;
    int alreadySort = 0;

    for(int i =0; i<n-1;i++)  // For Number of pass
    {
        cout<<"Working on pass number:"<< i+1<<endl;
        alreadySort=1;

        for(int j=0; j<n-1-i;j++) // For comparison in each pass
        {
            // condition like  smaller > largest
            if(a[j]>a[j+1]){
                // swap the numbers
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                alreadySort=0;
            }
        }

        if(alreadySort){
            return;
        }

    }
}

int main(){
     int a[]={1,2,3,987,45,32,89,100,128,34,65,87,33};
     int n=13;

     cout<<"Before Swapping are : "<<endl;
     print(a,n);
     sort(a,n);
     cout<<"After Swapping are : "<<endl;
     print(a,n);
     return 0;

}
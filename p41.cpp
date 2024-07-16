#include <iostream>
using namespace std;

//sort the array with input 0 and 1 only

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

}

void sortone(int arr[],int n){
     int i=0,j=n-1;
     while(i<j){
     while(arr[i]==0 && i<j){
        i++;
     }
     while(arr[j]==1 && i<j){
        j--;
     }
     if(arr[i]==1 && arr[j]==0 && i<j){
     swap(arr[i],arr[j]);
     i++;
     j--;
     }

}
}

int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array in form of 0 and 1="<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sortone(arr,n);
    printarray(arr,n);
    return 0;
}
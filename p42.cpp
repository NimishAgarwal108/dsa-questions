#include <iostream>
using namespace std;

//sort the array with input 0 and 1 and 2  only

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }

}

void sortone(int arr[],int n){
     int i=0,j=n-1,k=0;
     while(i<j){
     while(arr[i]==0 && i<j){
        i++;
     }
     while(arr[j]==2 && i<j){
        j--;
     }
     if(arr[i]==2 && arr[j]==0 && i<j){
     swap(arr[i],arr[j]);
     i++;
     j--;
     }
     else if(arr[i]==1 && arr[j]==0 && i<j){
     swap(arr[i],arr[j]);
     i++;
     }
     }
    while(k<j){
     if(arr[k]==0 && arr[j]==1 && k<j){
     swap(arr[k],arr[j]);
     j--;
     k++;
     }
     else if(arr[k]==2 && arr[j]==1 && k<j){
     swap(arr[k],arr[j]);
     k++;
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
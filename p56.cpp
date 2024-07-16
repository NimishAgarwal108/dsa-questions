#include<iostream>
using namespace std;
//to find pivot
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
        }
    else{
    e=mid;
        }
    mid=(e+s)/2;
}
return e;
}

int main(){
int arr[5]={8,10,17,1,3};
cout<<"the pivot element is at index "<<pivot(arr,5);
}
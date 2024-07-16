#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
//reverse array
void RA(int arr[],int n){
    int start=0;
    int end=n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    int nrr[4]={0,3,4,5};

    RA(arr,5);
    RA(nrr,4);

    printarray(arr,5);
    cout<<endl;
    printarray(nrr,4);
     return 0;
}
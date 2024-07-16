#include<iostream>
using namespace std;
//TO SWAP ALTERNATE ELEMENTS OF AN ARRAY!

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void swapthearray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main(){
    int even[10]={2,1,3,4,5,6,7,8,9,10};
    int odd[7]={1,2,3,4,5,6,7};
    swapthearray(even,10);
    printarray(even,10);
    cout<<endl;
    swapthearray(odd,7);
    printarray(odd,7);
    return 0;
}
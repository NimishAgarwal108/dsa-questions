#include<iostream>
using namespace std;
int LS(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,3,4,5,6,89,20,9,10};
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    bool found=LS(arr,10,key);
    if(found){
        cout<<"key is there"<<endl;

    }
    else{
        cout<<"not found"<<endl;
    }

}
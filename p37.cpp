#include<iostream>
using namespace std;
//TO FIND UNIQUE ELEMENT IN AN ARRAY!
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int sam[7]={1,1,2,2,3,3,20};
    int answer=unique(sam,7);
    cout<<answer;
    
    return 0;
}
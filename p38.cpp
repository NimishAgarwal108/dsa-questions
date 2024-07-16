#include<iostream>
#include<climits>
using namespace std;
int sameelements(int arr1[],int arr2[],int m,int n){
    int ans;
    for(int i=0;i<n;i++){
        int element;
         element=arr1[i];

    for(int j=0;j<m;j++){
        if(element==arr2[j]){
            int ans=element;
            arr2[j]=INT_MIN;
            break;
        }
    }
    
}
return ans;
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={1,2,8};
    int answer=sameelements(arr1,arr2,3,5);
    cout<<answer<<" ";
    return 0;
}
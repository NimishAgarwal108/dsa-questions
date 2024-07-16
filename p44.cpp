#include<iostream>
using namespace std;
//to find first and last occurence of a given key using binary search
int firstoccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int even[9]={1,2,2,2,2,2,2,3,4};
    cout<<"first occurence is at "<<firstoccurence(even,9,2)<<" index "<<endl;
    cout<<"last occurence is at "<<lastoccurence(even,9,2)<<" index "<<endl;
    return 0;
}
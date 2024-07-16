#include<iostream>
using namespace std;
//leetcode 852 peak mid problem using binary searching technique
    int peakIndexInMountainArray(int arr[],int n) {
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
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
int arr[4]={1,2,4,0};
cout<<"peak value is at index "<<peakIndexInMountainArray(arr,4);
return 0;
}

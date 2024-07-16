#include<iostream>
using namespace std;
//binary search to know the index of the given key
int binarysearch(int arr[],int n,int key){
      
      int start=0;
      int end=n-1;
      //start+(end-start)/2
      int mid=(start+end)/2;

      while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
      }
      return -1;
}
int main(){

int even[6]={1,2,3,4,5,6};
int odd[5]={1,3,5,7,9};

int answer=binarysearch(odd,5,9);
cout<<"the index of key is "<<answer<<endl;
return 0;
}
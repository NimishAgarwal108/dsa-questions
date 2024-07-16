#include<iostream>
using namespace std;
//it can give index value of a sorted and rotated array using pivot and binary search
int pivotelement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<end){
    if(arr[mid]>=arr[0]){
        start=mid+1;
        }
    else{
    end=mid;
        }
    mid=(end+start)/2;
}
return end;
}
int binarysearch(int arr[],int start,int end,int key){
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
int findposition(int arr[],int n,int key){
    int pivot=pivotelement(arr,n);
if(key>=arr[pivot]&&key<=arr[n-1]){
return binarysearch(arr,pivot,n-1,key);
}
else{
    return binarysearch(arr,0,pivot-1,key);

}
}
int main(){
int arr[5]={6,7,8,4,5};
int position=findposition(arr,5,6);
cout<<"the position is at index  "<<position<<endl;
return 0;


}
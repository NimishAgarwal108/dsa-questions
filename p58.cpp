#include<iostream>
using namespace std;
  long long int binarysearch(int n){
    int s=0;
    int e=n;
    long long mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
  }
    int mySqrt(int x) {
        return binarysearch(x);
        
    }
    int main(){
        int solution=mySqrt(64);
        cout<<"square root of given number is "<<solution<<endl;
        return 0;
    }
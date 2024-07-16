#include<iostream>
using namespace std;
//to fin sqrt of a number using binary search and also print decimal numbers if any
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
    int mySqrt(int n) {
        return binarysearch(n);
        
    }
    double precision(int n,int precision,int solution){
        double factor=1;
        double ans=solution;
        for(int i=0;i<precision;i++){
            factor=factor/10;
        
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }

    }
    return ans;
    }
    int main(){
        int n;
        cout<<"enter the number "<<endl;
        cin>>n;
        int solution=mySqrt(n);
        cout<<"the square root of number with more precision is "<<precision(n,3,solution);
        return 0;
    }
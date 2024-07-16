#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
//leetcode 1009 complement
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int m=n;
    if(n==0){
        return 1;
    }
    int mask=0;
    int ans;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    ans=(~n)&mask;
    cout<<ans<<endl;
}
        
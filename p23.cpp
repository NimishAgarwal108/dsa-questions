#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //leetcode 231 (power of 2)
    int n;
    cout<<"input a number which can be represented in power of 2"<<endl;
    cin>>n;
    int ans;
    for(int i=0;i<=30;i++){
        ans=pow(2,i);
        if(ans==n){
            cout<<"it is represented in power of 2"<<endl;
        }
        
}
}

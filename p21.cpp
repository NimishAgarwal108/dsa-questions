#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
//leetcode 7 reverse integer
int main(){
int n;
cout<<"eneter the number"<<endl;
cin>>n;
int digit;
int ans=0;
while(n!=0){
    digit=n%10;
    if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
        cout<<"invalid entry";
        return 0;
    }
    ans=(ans*10)+digit;
    n/=10;
}
cout<<ans<<endl;
}
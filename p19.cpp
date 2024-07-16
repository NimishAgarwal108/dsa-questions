#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //binary to decimal(o/p is diiferent but vs code problem,code is absolutely correct!)
    int n;
    cout<<"enter the binary number"<<endl;
    cin>>n;
    int ans=0;
    int rem=0;
    int i=0;
    while(n!=0){
        rem=n%10;
        ans=(rem*pow(2,i))+ans;
        i++;
        n=n/10;
    }
    cout<<"decimal form is "<<ans<<endl;

}
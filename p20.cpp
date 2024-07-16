#include<iostream>
#include<math.h>
using namespace std;
//decimal to binary
int main(){
    int n;
    cout<<"enter decimal number"<<endl;
    cin>>n;
    int ans=0;
    int power=1;
    int paritydigit=0;
    while(n!=0){
        paritydigit=n%2;
        ans=paritydigit*power+ans;
        power=power*10;
        n=n/2;
    }
    cout<<"binary number is "<<ans<<endl;

}
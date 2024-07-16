#include <iostream>
using namespace std;
int countbits(int n)
{
    //leetcode 191
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
    n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the value:"<<endl;
    cin>>n;
    cout<<"the number of bits of "<< n <<" is "<<countbits(n);
    return 0;
}

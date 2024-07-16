#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
       return 1;
}
    int main(){
        int n;
        cin>>n;
        if (isprime(n)){
            cout<<"IT IS A PRIME NUMBER"<<endl;

        }
        else{
            cout<<"NOT A PRIME NUMBER"<<endl;
        }
    }
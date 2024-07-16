#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int den=factorial(n-r)*factorial(r);
    int answer=num/den;
    return answer;
}
int main(){
    int n, r;
    cout<<"enter the numbers"<<endl;
    cin>>n>>r;
    int sol=ncr(n,r);
    cout<<"required answer is "<<sol<<endl;;
}
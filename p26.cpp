#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
int num1,num2;
int answer;
cout<<"enter the numbers"<<endl;
cin>>num1>>num2;
answer=power(num1,num2);
cout<<"answer is"<<answer<<endl;
}
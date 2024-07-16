#include<iostream>
using namespace std;
//mini calculator using switch case
int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    int b;
    cout<<"enter the value of b";
    cin>>b;
    char op;
    cout<<"enter the operation";
    cin>>op;
    switch(op){
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*':cout<<(a*b)<<endl;
        break;
        case '/':cout<<(a/b)<<endl;
        break;
        default:cout<<"invalid operation";
        break;
    }
    return 0;
}
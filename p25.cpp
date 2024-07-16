#include<iostream>
using namespace std;
int isEven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"enter the number to check"<<endl;
    cin>>num;
    if (isEven(num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

}
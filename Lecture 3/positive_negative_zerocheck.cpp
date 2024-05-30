#include<iostream>
using namespace std;
//this code is to check whether number is positive,negative or zero
int main(){
    int a;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<a<<endl;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is zero"<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
//this code is a calculator program using switch case 
int main(){
    int a,b;
    char operation;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<"enter the type of operation :";
    cin>>operation;
    switch(operation){
        case '*': cout<<a*b<<endl;
        break;
        case '/': cout<<a/b<<endl;
        break;
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '%': cout<<a%b<<endl;
        break;
        default: cout<<"give some other operation";
    }
    return 0;
}

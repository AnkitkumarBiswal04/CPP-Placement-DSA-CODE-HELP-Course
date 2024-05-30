#include<iostream>
using namespace std;
//this code is to find lower case upper case and digit 
int main(){
    char a;
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<<"it is in upper case"<<endl;
    }
    else if(a>='a' && a<='z'){
        cout<<"it is lower case"<<endl;
    }
    else if(a>='0' && a<='9'){
        cout<<"it is digit"<<endl;
    }
    return 0;
}

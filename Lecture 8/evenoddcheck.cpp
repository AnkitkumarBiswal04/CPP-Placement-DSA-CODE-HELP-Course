#include<iostream>
using namespace std;
//this code is to find even or odd by using function
int isEven(int a){
        if(a&1){
            return 0;
        }
        else{
            return 1;
        }
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
}

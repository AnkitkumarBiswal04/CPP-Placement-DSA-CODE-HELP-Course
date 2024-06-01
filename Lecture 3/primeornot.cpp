#include<iostream>
using namespace std;
//this code is used to check for whether it is prime or not using while loop
int main(){
    int n;
    cin>>n;
    int i;
    i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime for:"<<i<<endl;   
        }
        else{
            cout<<"is prime for:"<<i<<endl;
        }
        i=i+1;
    }
}

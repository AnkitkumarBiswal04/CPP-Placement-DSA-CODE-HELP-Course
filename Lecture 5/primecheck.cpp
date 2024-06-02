#include<iostream>
using namespace std;
//this code is to check whether it is prime number or not 
int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"it is prime "<<endl;
        }
    return 0;
}

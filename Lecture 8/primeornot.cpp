#include<iostream>
using namespace std;
//this code is to check whether the number is prime or not
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int num;
    cin>>num;
    cout<<isPrime(num);
}

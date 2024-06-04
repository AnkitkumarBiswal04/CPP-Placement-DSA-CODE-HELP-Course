#include<iostream>
using namespace std;
//this is the code for nCr using functions
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int nCr(int n,int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"the nCr value is :"<<nCr(n,r)<<endl;
    return 0;
}

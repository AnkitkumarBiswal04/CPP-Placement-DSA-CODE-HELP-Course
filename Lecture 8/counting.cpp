#include<iostream>
using namespace std;
//this codr is to print n
int counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    cin>>num;
    counting(num);
}

#include<iostream>
using namespace std; 
//this code is to print number pattern using while loop like
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
int main(){
    int n;
    cin>>n;
    int i=1;
    int j;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}

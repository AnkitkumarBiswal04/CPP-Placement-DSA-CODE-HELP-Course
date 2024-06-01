#include<iostream>
using namespace std;
//this code is to print this pattern 
// 1
// 22
// 333
// 4444
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

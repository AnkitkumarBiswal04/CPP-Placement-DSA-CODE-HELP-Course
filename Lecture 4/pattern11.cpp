#include<iostream>
using namespace std;
//this code is to print pattern like
// ABCD
// ABCD
// ABCD
// ABCD
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
    cout<<endl;
    row=row+1;
    }

    return 0;
}

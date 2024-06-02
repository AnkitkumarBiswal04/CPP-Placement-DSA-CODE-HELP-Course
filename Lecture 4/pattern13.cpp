#include<iostream>
using namespace std;
//this code is to print pattern like
// A B C 
// B C D 
// C D E 
int main(){
    int n;
    cin>>n;
    int row=1;
    
    while (row<=n){
        int col=1;
        int val=row;
        while(col<=n){
            char ch='A'+val-1;
            cout<<ch<<" ";
            val=val+1;
            col=col+1;
        }
    cout<<endl;
    row=row+1;
    }

    return 0;
}

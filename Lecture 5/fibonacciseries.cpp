#include<iostream>
using namespace std;
//this code is to print the fibonacci series 1 2 3 5 8 13 21 34 55 89 144 233 ;

int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
        int nextterm=a+b;
        cout<<nextterm<<" ";
        a=b;
        b=nextterm;
        
        
    }

    return 0;
}

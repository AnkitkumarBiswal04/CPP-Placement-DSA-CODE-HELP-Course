#include<iostream>
using namespace std;
//this code is to find the sum of even numbers from 1 to n
int main(){
    int n;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        if(i%2==0)
            sum=sum+i;
            i=i+1;
    }
    cout<<sum<<endl;
    return 0;
}

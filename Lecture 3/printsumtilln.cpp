#include<iostream>
using namespace std;
//this code is to find sum of number from 1 to n
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){

        sum=sum+i;
        i=i+1;
    }
        cout<<"value of sum is:"<<sum<<endl;
   
    return 0;
}

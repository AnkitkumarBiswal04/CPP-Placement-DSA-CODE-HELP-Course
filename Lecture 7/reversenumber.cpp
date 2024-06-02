#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
//this code is to reverse a number 
int main(){
    long n;
    cin>>n;
    long ans=0;
    while(n !=0){
        long digit=n%10;
        if((ans>INT_MAX)||(ans<INT_MIN)){
            return 0;
        }
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<ans;
    return 0;
}

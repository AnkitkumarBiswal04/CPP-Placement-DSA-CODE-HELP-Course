#include<iostream>
using namespace std;
//this code is to find the sum of nmbers from 1 to n
int main(){
    int n;
    cin>>n;
    int i;
    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Total sum of numbers from"<<" "<<1<<" "<<"to"<<" "<<n<<" "<<"is:"<<sum;
    cout<<endl;
    return 0;
}

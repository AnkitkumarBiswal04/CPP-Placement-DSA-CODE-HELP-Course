#include<iostream>
using namespace std;
//this code is to sfind sum in an array
int sumArray(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"the sum of array is:"<<sumArray(array,size);
    return 0;
}

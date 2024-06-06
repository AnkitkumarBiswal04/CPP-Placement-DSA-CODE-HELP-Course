//this code is to reverse the alternate element in an array
#include<iostream>
using namespace std;
void alternateReverse(int array[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(array[i],array[i+1]);
        }
    }
    cout<<"Alternate Reverse :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Original Array :";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    alternateReverse(array,size);
    return 0;
}

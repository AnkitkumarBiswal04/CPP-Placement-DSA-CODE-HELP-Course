#include<iostream>
using namespace std;
//this code is for linear search to find the key element
bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int key;
    cin>>key;
bool keyfound=linearSearch(arr,n,key);
    if(keyfound){
        cout<<"the key is present";
    }
    else{
        cout<<"the key is not present";
    }
}

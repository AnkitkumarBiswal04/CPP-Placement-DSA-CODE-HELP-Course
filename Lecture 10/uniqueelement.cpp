//this code is to find the unique element in an array 
//for examplt [ 1,2,1,3,4,3,4,5]
//from this the unique element would be 5
//as others are repeating twice
#include<iostream>
using namespace std;
void uniqueElement(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        //xor operator is used
        //for example a^a=0 and 0^a=and
        //thus 
        ans=ans^arr[i];
    }
    cout<<ans;
}
//main function
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the original array :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the unique element is :";
    uniqueElement(arr,size);
    return 0;
}

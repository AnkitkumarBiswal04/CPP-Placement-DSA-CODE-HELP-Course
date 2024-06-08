//this code is to sort 0 and 1 in an array 
//lets start with coding 
#include<iostream>
using namespace std;
int print(int array[],int size){
    for(int i=0;i<size;i++){
      cout<<array[i]<<" ";
    }
    cout<<endl;
}
//now lets create a sort function
int sort(int array[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        while(array[start]==0 && start<end){
        start++;
     }
        while(array[end]==1 && start<end){
        end--;
     }
        if(start<end){
            swap(array[start],array[end]);
            start++;
            end--;
        }
    }
}
//main function
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    sort(array,size);
    print(array,size);
    return 0;
}

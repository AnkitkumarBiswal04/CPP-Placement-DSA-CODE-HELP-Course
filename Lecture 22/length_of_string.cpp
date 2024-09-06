#include<iostream>
using namespace std;
int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"Your name is :";
    cout<<name<<endl;
    cout<<"Length is:"<<length(name);
    return 0;
}

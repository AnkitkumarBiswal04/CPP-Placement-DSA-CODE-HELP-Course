#include<iostream>
using namespace std;
//this code is to understand switch case 
int main(){
    int num;
    cin>>num;
    switch(num){
        case 1: cout<<"one";
        break;
        case 2: cout<<"two";
        break;
        case 3: cout<<"three";
        break;
        case 4: cout<<"fout";
        break;
        case 5: cout<<"five";
        break;
        default: cout<<"select another number";
    }
    return 0;
}

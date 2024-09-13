#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
  //creatimg a unordered map
    unordered_map<string,int>m;
  //inserting elements in the unordered map
    pair<string,int>pair1=make_pair("Ankit",3);
    m.insert(pair1);
    pair<string,int>pair2("Kumar",2);
    m.insert(pair2);
    pair<string,int>pair3("Biswal",1);
    m.insert(pair3);
  //printing the size of the unordered map
    cout<<"Total size of the sentence having words is :"<<m.size()<<endl;
  //peinting the elements of the map
    cout<<"Number of times word 1 repeated is:"<<m.at("Ankit")<<endl;
    cout<<"Number of times word 2 repeated is:"<<m.at("Kumar")<<endl;
    cout<<"Number of times word 3 repeated is:"<<m.at("Biswal")<<endl;
  //erase an element from the unordered map
    m.erase("Kumar");
    cout<<"Total size of the sentence having words After erasing or removing an element is :"<<m.size()<<endl;
    return 0;
}

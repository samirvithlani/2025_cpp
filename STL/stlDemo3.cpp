#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){

    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(300);
    v.push_back(37);
    v.push_back(39);

    for(int x:v){
        cout<<"  x="<<x;
    }
    cout<<"\n";
    v.pop_back(); //void
    for(int x:v){
        cout<<"  x="<<x;
    }
    //remove...index...
    v.erase(v.begin()+2);
    cout<<"\n";
    for(int x:v){
        cout<<"  x="<<x;
    }

    v.clear();//remove all
        cout<<"\n";
    for(int x:v){
        cout<<"  x="<<x;
    }



}

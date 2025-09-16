#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;

int main(){


    string name = "samir"; //5 
    for(int i=name.size()-1;i>=0;i--){
        cout<<name.at(i);
    }


}
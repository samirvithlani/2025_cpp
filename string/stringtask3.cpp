#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;

int main(){

    string name = "ajay";
    int count=0;

    for(int i=0;i<name.size()-1;i++){

        char c = name.at(i);
        if(c=='a'||c=='i'){
            count++;
        }
    }

    cout<<"\n vovel count = "<<count;
}

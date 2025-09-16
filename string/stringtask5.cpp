#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;

// Insert Separator (using insert())

// Input: "abcdef", Output: "a-b-c-d-e-f"


int main(){


    string name = "abcdf";
    //i=1,3
    for(int i=1;i<name.size();i+=2){
        //a-bcdef
        //a-b-cdef
        name.insert(i,"-");
    }
    cout<<"\n "<<name;

}
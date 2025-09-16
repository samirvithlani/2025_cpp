// Remove Extra Spaces (using erase())

// Input: "I love C++"

// Output: "I love C++"

#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;

int main(){

    string email ="   samir@gmail.com   ";
    if(email.at(0)==' '){
        email.erase(0,1);
    }
    if(email.back() ==' '){
        email.erase(email.size()-1,1);
    }
    for(int i=0;i<email.size()-1;i++){
        //email(0) == ' ' && email(1) == ' '
        
        if(email.at(i)==' ' && email.at(i+1) ==' '){
            email.erase(i,1);
            i--;
        }

    }
    cout<<"\n email "<<email;


}
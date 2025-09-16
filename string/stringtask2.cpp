#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;


int main(){

    string name = "ritesr"; //6
    //rsetir
    //
    bool isPalindrome = true;
    //
    for(int i=0;i<name.size()/2;i++){
        
      //name(0)!=name(5)||r!=r
      //name(1)!=name(4) ||i!s
        if(name.at(i)!=name.at(name.size()-1-i)){
            isPalindrome = false;
            break;

        }
    }

    cout<<"\n palindrome  "<<isPalindrome;


}
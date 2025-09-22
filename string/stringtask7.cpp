#include<iostream>
#include<string>
using namespace std;

// Input: "I like Java"

// Replace "Java" with "C++".

int main(){

    string s = "i like java";
    int pos = s.find("java"); //java //-1 : unsigned int 
    cout<<"\n pos = "<<pos;
    //s::npos 
    //-1 < 11
    //find() string::npos  which defines(size_t)(-1)
    //size_t -->unsigned int convert ---> -1 1844674407.,.ll
    if(pos<11){
        cout<<"\n inside if....";
        s.replace(pos,4,"c++"); // 44 -->replace string size
        
    }
    cout<<"\n s ="<<s;


}

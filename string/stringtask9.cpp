// Dynamic Buffer Test (using capacity())

// Start with an empty string. Keep appending characters (append() or push_back()) one by one.

// Print size() and capacity() after each step to observe capacity doubling behavior.



#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    for(int i=0;i<20;i++){
        s.append("s");
        cout<<"\n size = "<<s.size();
        cout<<"\n cap = "<<s.capacity();
    }


}
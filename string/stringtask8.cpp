// Trim String (using erase() and size())

// Input: " hello world "

// Remove leading and trailing spaces manually.

//"  samir@gmail.com  " extra white space..

#include<iostream>
#include<string>

using namespace std;

int main(){

    string s = "  samir@gmail.com   ";
    cout<<"\n size of s = "<<s.size();

    //remove leading spcaes...left side...
    //"  samir@gmail.com   "
    //" samir@gmail.com   "
    //"samir@gmail.com   "
    while(!s.empty() && s.front()==' '){
        s.erase(0,1);
    }
    cout<<"\n aftr remove left side space "<<s;
    cout<<"\n aftr remove left side space lenght "<<s.size();

    //"samir@gmail.com   "
    while(!s.empty() && s.back()==' '){
        s.erase(s.size()-1,1);
    }

    cout<<"\n aftr remove left side space "<<s;
    cout<<"\n aftr remove left side space lenght "<<s.size();




}
#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;
int main(){

    string s1; //empty string declare
    string s2("Hello"); //init with value..
    string s3 = "word"; // copy of value..
    string s4(s2) ;// copy constructor..
    string s5(5,'x');//
    cout<<"s1"<<s1<<endl;
    cout<<"s2"<<s2<<endl;
    cout<<"s3"<<s3<<endl;
    cout<<"s4"<<s4<<endl;
    cout<<"s5"<<s5<<endl;



}
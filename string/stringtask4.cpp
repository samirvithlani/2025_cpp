#include<iostream>
#include<string> // cpp -->string class
//string stores data in dynamic array
using namespace std;


int main(){

    string name = "kunal";

    if(name.size()%2==1){
        int mid = name.size()/2;
        cout<<"\n mid "<<mid; 
        //n upper
        //name.at(2)
        //n          = toupper(name.at(2)) =N
        name.at(mid) = toupper(name.at(mid));
    }
    else{
        cout<<"\n no middle char found!!";
    }

    cout<<"\n after "<<name;

}
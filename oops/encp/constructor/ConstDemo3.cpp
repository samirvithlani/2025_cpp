
#include<iostream>
#include<string>
using namespace std;

class Instagram{

    public:
    //char userName[10] ="ram"; 
    string userName; //blank

    Instagram(string uname){ //u1 = ram //u2 =seeta
        userName = uname;
    }
    

    void getUserName(){

        cout<<"\n userName = "<<userName;
    }

};

int main(){


    Instagram u1("ram");
    u1.getUserName(); /// seeta
    Instagram u2("seeta");
    u2.getUserName(); // seeta



}
#include<iostream>
using namespace std;


class User{

    public:

    User(){
        cout<<"\n user class default const:";
    }

};
class Employee:public User{

    public:
    Employee(){
        cout<<"\n employee class default const called...";
    }

};


int main(){

    Employee emp; //employee class default const...

}
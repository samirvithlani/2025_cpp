#include<iostream>
using namespace std;


class User{

    public:

    //param
    User(int age){
        cout<<"\n user class param const:"<<age;
    }

};
class Employee:public User{

    public:
    Employee():User(20){
        cout<<"\n employee class default const called...";
    }

};


int main(){

    Employee emp; //employee class default const...

}
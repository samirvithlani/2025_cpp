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
    // Employee(int age):User(20){
    //     cout<<"\n employee class param const called..."<<age;
    // }
     Employee(int age):User(age){
        cout<<"\n employee class param const called..."<<age;
    }

};


int main(){

    Employee emp(20); //employee class default const...

}
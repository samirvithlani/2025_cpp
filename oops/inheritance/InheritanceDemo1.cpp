#include<iostream>
using namespace std;

class Parent{

    public:

    int amount = 1000;

    void display(){
        cout<<"parent class display function"<<endl;
    }

};
//parent --> child  
class Child : public Parent{

    public:

    void show(){
        cout<<"child class show function called..."<<endl;
        cout<<"amount from parent class :: "<<amount<<endl;
    }
    void callParentDisplay(){
        display(); // calling parent class function
    }

};


int main(){

    Child c; // default constructor of Child class called
    c.show(); // child class function
    c.display();
    c.callParentDisplay(); // calling parent class function from child class

    // Parent p; // p is an object of Parent class
    // p.show(); // this function belongs to child class,,


}
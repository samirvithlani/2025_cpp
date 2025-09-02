#include<iostream>
using namespace std;


class TRAI{

    public:
    //pure virtual function
    virtual void call() =0;
};

class Jio:public TRAI{

    public:
    void call() override {
        cout<<"\n jio calling....";
    }
};

int main(){

    //TRAI t; //trai.. we can not create an object of abstract class..
    TRAI *t;
    Jio j; // jio class object...

    //polymorephic object
    //parent class reference and child class object

    t = &j; // j memory ---> trai referance
    t->call(); // inhertiance...

    

}
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


    Jio j;
    j.call();
}
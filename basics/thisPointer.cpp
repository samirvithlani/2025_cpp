#include<iostream>
using namespace std;

class Bank{


    public:
    int amount = 10000; //class variable..
    int x;
    void withdraw(int amount){ //local

        cout<<"\n amount = "<<amount;
        cout<<"\n amount from class..."<<this->amount;
        cout<<"\n x"<<this->x;

    }

};


int main(){

    Bank b;
    b.withdraw(100);

}
#include<iostream>
using namespace std;


class Gov{

    public:
    void paytax(){
        cout<<"\n tax method ov gov class called...";
    }


};
class State:public Gov{


    public:
    void paytax(){
        //cout<<"\n tax method of state class called...";
        Gov::paytax();
        
    }

};

int main(){


    State s;
    s.paytax();

}
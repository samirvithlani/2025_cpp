#include<iostream>
using namespace std;

class User{

    public:
    int age;

    User(int age){
        this->age = age;
    }

    bool operator &&(User&u){

        //return this->age && u.age;
        //0 1
        return this->age == u.age;
    }


};

int main(){

    User u1(0);
    User u2(0);
    
    if(u1 && u2){
        cout<<"\n both user with same age !!";
    }
    else{
        cout<<"\n bpth user with not same age !!";
    }

}
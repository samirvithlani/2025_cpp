//binary op overloading..
#include<iostream>
#include<string>
using namespace std;
class User{

    public:
    int age,marks;
    //      23         77 
    User(int age,int marks){

        this->age = age; //23 //24
        this->marks = marks; //77 //78
    }

    // void operator +(const User &u){
    //     cout<<"\n + op overlaoded...";
    //     cout<<"\n value of age ="<<age; //23 --> 24
    //     cout<<"\n value of marks ="<<marks; //77 -->78

    //     cout<<"\n value of age using object "<<u.age;
    //     cout<<"\n value of marks using object "<<u.marks;
    // }

    User operator +(const User &u){
        cout<<"\n + op overlaoded...";
        cout<<"\n value of age ="<<age; //23 --> 24
        cout<<"\n value of marks ="<<marks; //77 -->78

        cout<<"\n value of age using object "<<u.age;
        cout<<"\n value of marks using object "<<u.marks;

        //     User(-1,-1)    
        return User(age-u.age,marks-u.marks);
    }


};

int main(){

    User u1(23,77); //param
    User u2(24,78); //param
    User u3 = u1 + u2;
    cout<<"\n u3.marks = "<<u3.marks;
    cout<<"\n u3.age = "<<u3.age;
}
#include<iostream>
using namespace std;

class Employee{


    public:
    int salary=30000;
    int age=20;

    int getSalary(){
        cout<<"\n salary function called...";
        return salary;
    }
    int getAge();

};

int Employee :: getAge(){

    cout<<"\n get age function called...";
    return age;
}

int main(){


    Employee emp;
    int empSal,empAge;
    empSal = emp.getSalary();
    cout<<"\n employee salary = "<<empSal;
    empAge = emp.getAge();
    cout<<"\n employee age = "<<empAge;

    //python java js -if function is returing value you can call direclty in print statment
    cout<<"\n employee age direct in function = "<<emp.getAge();
    //cout<<emp.getAge() without message...
}
#include<iostream>
#include<string>
using namespace std;

class Employee{


        public:
        int age; //instance variable.. -- copy-->3
        Employee(){
            cout<<"\n employee class default const..";
            this->age = 25; //emp1 -- room -- age 25
        }
        Employee(int salary){
            cout<<"\n employee class 1 param with sal function called"<<salary;
            this->age =26;
        }
        Employee(string name,int age){
            
            cout<<"\n employee name = "<<name;
            cout<<"\n employee age = "<<age;
            this->age = age;
        }

        void getAge(){
            cout<<"\n age = "<<this->age;
        }

};

int main(){

    Employee emp1; //only 1
    Employee emp2(10000);
    Employee emp3("ram",23);

    //emp1.getAge(); //emp1.age=25
    emp3.getAge();

};

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{

    public:

    string sname;
    int sage;
    int srollno;

    Student(int age,string name,int rollno){

        this->sname= name;
        this->sage = age;
        this->srollno = rollno;
    }
};


int main(){

    vector<Student> stu;
    //v.push_back(100)
    //v.push_back("hbaks")

    //1st stu object
    Student s1(18,"ram",101);
    Student s2(19,"seeta",102);
    Student s3(18,"neha",103);

    stu.push_back(s1); //ram...
    stu.push_back(s2); //seeta..
    stu.push_back(s3);
    stu.push_back(Student(21,"jay",104));

    //for(int i:stu)
    //1 -->s == s1
    //2 -->s == s2
    //3 --s == s3
    for(Student s:stu){
        cout<<"\n student name = "<<s.sname;
        cout<<"\n student age = "<<s.sage;
        cout<<"\n student rollNo = "<<s.srollno;
        cout<<"\n------------------------------";
    }

}
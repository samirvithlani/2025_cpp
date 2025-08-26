#include<iostream>
using namespace std;

class Shape{

    public:
    int x;
    // void area(){
    //     cout<<"\n are function called....";
    // }

    // int area(){
    //     cout<<"\n are function called....";
    //     return 100;
    // }

    Shape area(){
        cout<<"\n are function called....";
        Shape s1; //default....
        s1.x =1000;

        return s1;
    }


};

int main(){

    Shape s;
    s.x = 100;
    cout<<"\n x = "<<s.x; //100
    //int x = s.area();
    Shape s2 =s.area(); // s2 == s1.x=1000
    cout<<"\n s2.x = "<<s2.x;

}

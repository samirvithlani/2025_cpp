#include<iostream>
using namespace std;

class Calc{


    public:
    int no1,no2,ans=0;
};

int main(){

    Calc c; //object...
    //Calc c2; n
    cout<<"\n enter no1 :";
    cin>>c.no1;
    cout<<"\n enter no2 :";
    cin>>c.no2;
    c.ans = c.no1 + c.no2;
    cout<<"ans = "<<c.ans;


}
#include<iostream>
#include<string>

using namespace std;

class Counter{

    public:
    int value; //instance variable... //100
    Counter(int v){
        this->value = v;
    }

    // ++a increment...
    //prefix
    void operator ++(){
        //logic:
        cout<<"\n ++ operator overloaded..";
        this->value++; //101
    }

    //postfix
    //a++
    //int --> dummy placeholder
    void operator ++(int){
        cout<<"\n post fix operator overload called...";
    }

    void display(){
        cout<<"\n value of value = "<<this->value; //101
    }

};

int main(){

    Counter c1(100); //param..
    ++c1; //++ operator function 
    c1.display();
    c1++;

}
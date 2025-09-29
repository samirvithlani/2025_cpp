#include<iostream>
#include<string>
using namespace std;

int main(){

    int no1 = 100; //100
    string strno1 = to_string(no1); //"100"
    cout<<"\n strno1 = "<<strno1;


    string  text = "hello world";
    int pos = text.find('o');
    cout<<"\n pos =  "<<pos;

    int pos2 = text.find('z');
    cout<<"\n pos2"<<pos2;
    //string::npos == -1
    if(pos2==string::npos){
        cout<<"\n z not found";
    }

}

//programming
//progamin

//hint npos and find

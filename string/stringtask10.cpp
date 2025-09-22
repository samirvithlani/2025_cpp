#include<iostream>
#include<string>
using namespace std;


int main(){

        string s = "javj";
        bool ispal = true;
        string temp = s;

        //temp ="naman" 5

        //temp == java 4

        //5>1 true
        //3>1 true
        //1>1 false

        //4>1 true
        while(temp.size()>1){
            //n!=n - false
            //a!a - false

            //j!=a true
            if(temp.front()!=temp.back()){
                ispal = false; // false
                break; 
            }
            //it will remove n "aman"
            //ama - a ma
            temp.erase(0,1);
            //last n -->ama
            //last a
            temp.erase(temp.size()-1,1);
        }
        

        if(ispal==true){
            cout<<"\n it is palindrome !!";
        }
        else{
            cout<<"\n not";
        }



}
#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){

    vector<int>v;
    int choice;
    int no;

    while(true){
        cout<<"\n enter yout choice 1 for cn 0 for exit";
        cin>>choice;

        if(choice==1){
            cout<<"\n enter no :";
            cin>>no;
            v.push_back(no);
        }
        else if(choice==0){
            break;
        }

    }
    for(int x:v){
        cout<<" "<<x;
    }

}
//q - fifo
//s - lifo
#include<stack>
#include<string>
#include<iostream>

using namespace std;

int main(){

    stack<string> actions;
    actions.push("Typed: Hello");
    actions.push("Typed: World");
    actions.emplace("Deleted: World "); //faster push
    actions.push("Typed :C++");

    cout<<"\n Last Action : "<<actions.top()<<endl;
    //last remvoe..
    actions.pop(); //remove last action

    cout<<"\n Now Last Action : "<<actions.top()<<endl;

    //tota; actions
    cout<<"\n total actions :"<<actions.size()<<endl;
    
    //loop for auto

    while(!actions.empty()){
        cout<<"-->UNDO"<<actions.top()<<endl;
        actions.pop();
    }

    cout<<"\n can i do more undo?"<<(actions.empty()?"No" :"Yes")<<endl;

}

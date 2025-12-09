#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){

    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);

    cout<<"\n FRONT--"<<q.front();
    cout<<"\n FRONT--"<<q.back();
    cout<<"\n FRONT--"<<q.size();

    //pop
    q.pop();

    cout<<"\n FRONT--"<<q.front();

    // for(auto i :q){
    //     cout<<"\n"<<i;
    // }

    //while

    while(!q.empty()){
        cout<<"\n"<<q.front();
        q.pop();

    }

    // for(auto temp=q;!temp.empty();temp.pop()){
    //     auto i = temp.front();
    //     cout<<"\n"<<i;
    // }


}
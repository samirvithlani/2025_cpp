#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){

    priority_queue<int> pq;
    pq.push(100);
    pq.push(10);
    pq.push(120);
    pq.push(87);
    pq.push(45);

    // cout<<"\n top"<<pq.top();
    // pq.pop(); //top
    // cout<<"\n top"<<pq.top();

    while(!pq.empty()){
        cout<<"\n"<<pq.top();
        pq.pop(); //it will remove top;
    }



}
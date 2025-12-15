#include<iostream>
#include<string>

#include<queue>

using namespace std;

int main(){

    priority_queue<pair<int,string>> hospital;
    hospital.push({3,"Noraml Patient"});
    hospital.push({10,"Heart Attack"});
    hospital.push({5,"Accident"});
    hospital.push({1,"Routine Checkup"});

    // cout<<"\n top priority p = "<<hospital.top().first;
    // cout<<"\n top priority p = "<<hospital.top().second;

    while(!hospital.empty()){
        cout<<"\n serving "<<hospital.top().second;
        hospital.pop();
    }

}
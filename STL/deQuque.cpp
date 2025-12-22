#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){

    deque<string> rides;

    //normal rider..
    rides.push_back("Rider_A");
    rides.push_back("Rider_B");
    rides.push_back("Rider_C");

    //vip rider...
    rides.push_front("VIP_RIDER_X");
    //emergency rider..
    rides.emplace_front("EMERGENCY_RIDER_Y");
    

    //show current rides queue;
    for(int i=0;i<rides.size();i++){
        cout<<i<<" -> "<<rides[i]<<endl;
    }

    //driver pickup first rider...
    cout<<"Driver picked "<<rides.front()<<endl;
    rides.pop_front();

    //driver cancel ride for last rider..
    cout<<"Driver cancelled ride  for "<<rides.back()<<endl;
    rides.pop_back();

    //rider cancell in middle

    cout<<"Middle ride cancelled : "<<rides.at(1)<<endl;
    rides.erase(rides.begin()+1);

    //insert rider at specific position..
    rides.insert(rides.begin()+1,"Rider_D");
    for(auto s:rides){
        cout<<s<<endl;
    }
    //driver has completed all rideds.. clearing queue

    rides.clear();










}

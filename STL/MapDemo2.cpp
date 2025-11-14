#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<int,string> map;
    map[1]="Raj";
    map[2]="Parth";
    map[3]="Jay";
    map[4]="Kunal";
    map[5]="Shyam";

    //erase by key
    //map.erase(2);
    //map.clear();

    if(map.count(33)){
        cout<<"\n key is present...";
    }

    for(auto i:map){
        cout<<"\n"<<i.first<<"-"<<i.second;
    }


}
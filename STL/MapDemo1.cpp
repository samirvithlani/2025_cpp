#include<iostream>
#include<map>
#include<string>

//Gujarat -- >Gandhinagar
//KEY --->Value

//0 -> Gandhinagr
//1001 --> Rahul
//1002 --> parth

// electronics:i[hone]
// fashion : tshirt
using namespace std;
int main(){

    //how to create map..
    map<string,string> m = {{"Guj","Gandhinagar"},{"UP","Lucknow"},{"Mah","Mumbai"},{"Guj","Ahmedbad"}};
    //accessing single elm
    cout<<"\n"<<m["Guj"]; //-->value...blank
    cout<<"\n"<<m.at("UP");  //-->exception

    //adding key,value

    //1st way
    m["Punjab"] ="chandhigadh";

    //2nd way
    m.insert({"Raj","Jaipur"});

    //3rdway
    m.insert(make_pair("MP","Bhopal"));




    //how to iterate data from map

    for(auto &pair:m){
        cout<<"\n"<<pair.first<<"-"<<pair.second;
    }



}


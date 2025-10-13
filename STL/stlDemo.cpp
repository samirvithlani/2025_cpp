#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){

    //vector variable...
    vector<int> v={100,200,300};
    //foreach loop
    cout<<"\n 0-->"<<v[0];

    for(int i=0;i<v.size();i++){
        cout<<"\n elm = "<<v[i];
    }

    for(int x:v){
        cout<<"\n "<<x;
    }


}
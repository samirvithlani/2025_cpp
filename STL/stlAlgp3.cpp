#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

//#find
using namespace std;
int main(){

    vector<int> v={100,20,34,56,78,120,1,24,54};

    auto i = find(v.begin(),v.end(),344);
    if(i!=v.end()){
//        cout<<"Found index"<<(i - v.begin());
        cout<<"Found index"<<*i;
    }
    else{
        cout<<"\n not found. ,";
    }
}
#include<iostream>
#include<string>
using namespace std;


template<typename T>
class Iterate{

    public:
    void loop(T a,T b){

        for(int i=a;i<=b;i++){
            cout<<"\n"<<i;
        }
    }
    void loopauto(auto a,auto b){
        for(int i=a;i<=b;i++){
            cout<<"\n"<<i;
        }
    }

};

int main(){

    Iterate<int>itr;
    itr.loop(1,10);

    Iterate<string>itr2;
    itr2.loop("ahmedabad","pune");

    
    
}
//create swapper class which can swap any kind of data
//a-b int
//a-b string
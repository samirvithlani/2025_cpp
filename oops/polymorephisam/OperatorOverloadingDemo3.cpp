#include<iostream>
using namespace std;

class Balance{


        public:
        int bal;
        Balance(int bal){

            this->bal = bal;
        }

        bool operator ==(const Balance &b){
            cout<<"\n == op fun called...";
            //
            return bal == b.bal;
        }

};

int main(){

    Balance raj(1000);
    Balance parth(10000);

    // bool x = raj == parth;
    // cout<<"\n x "<<x;

    if(raj==parth){
        cout<<"\n both have same balacne";
    }
    else{
        cout<<"\n both has not same balacne";
    }

}
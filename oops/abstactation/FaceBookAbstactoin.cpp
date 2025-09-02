#include<iostream>
using namespace std;


class Facebook{

    public:
    virtual void smile() = 0;

};

class Vishwesh : public Facebook{

    public:
    void smile(){
        cout<<"\n '_' smile by vishwesh and compnay";
        //10,000c
    }
};
class Fenil : public Facebook{

    public:
    void smile(){
        cout<<"\n '~' smile by vishwesh and compnay";
        //10,000c
    }
};
int main(){

        Vishwesh v;
        Facebook *f;
        
        f = &v;
        f->smile();

        Fenil fenil;
        f = &fenil;
        f->smile();

}
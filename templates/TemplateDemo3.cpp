#include<iostream>
using namespace std;

template <typename T>
class Calc{

    public:
    T add(T a,T b){
        
        return a + b;
    }

};

int main(){


    Calc <int>c1;
    cout<<"ans = "<<c1.add(10,20);
    cout<<"\nans = "<<c1.add(10.10,20.90);

    Calc<float>c2;
    cout<<"\nans = "<<c2.add(10.20,10.80);
    cout<<"\nans = "<<c2.add(10,11);

    Calc <string> c3;
    cout<<"\n ans = "<<c3.add("ram","sharma");
    cout<<"\n ans = "<<c3.add("64","1");
    //cout<<"\n ans = "<<c3.add(64,1); error..

    // Calc<auto> c4;
    // //cout<<"\n ans2 = "<<c4.add(10,20);
    // cout<<"\n ans2 = "<<c4.add("raj","jay");

}


//print(sp,ep){
// loop
// buitin function string --> int
//}


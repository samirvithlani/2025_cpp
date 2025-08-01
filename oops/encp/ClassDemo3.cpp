#include<iostream>
using namespace std;

//class is collection of data member and member functions
class Bank{


    public:
    float balance = 0;
    //withdraw
    //deposit
    //returntype funname(param){}
    //without return type with argument
    // void withdraw(float amount){

    //     balance = balance - amount;
    //     cout<<"\nwithdraw process done successfully"<<endl;
    //     cout<<"after withdraw balance is:"<<balance;
    // }

    void withdraw(float amount){

        if(amount>balance){
            cout<<"\n insufficent balance !!";
        }
        else{
            balance = balance - amount;
            cout<<"\nwithdraw process done successfully"<<endl;
            cout<<"after withdraw balance is:"<<balance;
        }
    }
    void deposit(float amount);

};
// :: scope resolution op...
//
void Bank :: deposit(float amount){

        balance = balance + amount;
        cout<<"\n deposit process is successfully done !!";
        cout<<"\n after deposit balance  = "<<balance;
}

int main(){

    //class refer... Object...
    Bank bank;
    bank.deposit(1000);
    bank.withdraw(150);



}
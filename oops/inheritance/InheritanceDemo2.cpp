#include<iostream>
using namespace std;

class India{
    //first parent

    public:
    float tax = 10.0f;
    int population = 1400000000;

    void pride(){
        cout << "Proud to be an Indian!" << endl;
    }

};
class Gujarat{
    //second parent

    public:
    int grant = 10000;
    int population = 60000000;

    void pride(){
        cout << "Proud to be a Gujarati!" << endl;
    }
};

class Ahmedabad: public India, public Gujarat{

    
    public:
    int population = 8000000; //local variable
    void display(){
        cout << "Tax: " << tax << endl;
        cout << "Grant: " << grant << endl;
        cout<<"populatoin  "<<population << endl;
        cout<<"population of India : "<<India::population << endl;
        cout<<"population of Gujarat : "<<Gujarat::population << endl;
    }
};

int main(){

    Ahmedabad a;
    a.display();
    //a.pride(); // Calls the pride function from India class
    //scope resolution operator to call pride from Gujarat class
    a.India::pride(); // Calls the pride function from India class
    a.Gujarat::pride(); // Calls the pride function from Gujarat class

    cout<<"ahmedabad population : "<<a.population<<endl;
    cout<<"population of India : "<<a.India::population<<endl;
    cout<<"population of Gujarat : "<<a.Gujarat::population<<endl;
}
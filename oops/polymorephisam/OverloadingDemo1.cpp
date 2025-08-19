#include<iostream>
using namespace std;

class Shape{


        public:
        float pi =3.14;

        void getArea(){
            cout<<"\n area function called without any kind of area...";
            //return 0.0;
        }
        void getArea(float r){
            cout<<"\n area function called for circle!!";
            float area = pi * (r*r);
            cout<<"\n area of circle = "<<area;
            //return area;
        }
        void getArea(int h){
            cout<<"\n area function called for square!!";
            int area = h*h;
            cout<<"\n area of square = "<<area;
            //return area;
        }
        void getArea(int h,int w){
            cout<<"\n area function called for traingle";
            int area = 0.5 * h *w;
            cout<<"\n area of triangle  = "<<area;
        }



};

int main(){


    Shape s; //default const..
    s.getArea();
    s.getArea(10);
    s.getArea(10.0f);
    s.getArea(10,20);



}
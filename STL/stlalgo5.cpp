#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>

using namespace std;
//sort()
int main(){

    vector<int> v={100,20,34,56,78,120,1,24,54};
    //sum
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<"\n sum of v="<<sum;
    //sum of array
    vector<int> v1={1,2,3,4,5};

    int prod = accumulate(v1.begin(),v1.end(),1,[](int a,int b){
        return a * b;
    });
    cout<<"\n prod"<<prod;

    vector<string> v3={"hi","hello","ok"};
    int all = accumulate(v3.begin(),v3.end(),0,[](int s1,string str){
        return s1 + str.length();
    });
    cout<<"\n all "<<all;

    
//    vector<int> v={100,20,34,56,78,120,1,24,54};
    //lower_bound

       vector<int> v4={10,20,30,40,50};
    auto it = lower_bound(v4.begin(),v4.end(),30); //>=
    cout<<"\n --->"<<(it - v4.begin()); //index
    cout<<"\n -->"<<*it;

    auto it2 = upper_bound(v4.begin(),v4.end(),31); //>
    cout<<"\n --->"<<(it2 - v4.begin()); //index
    cout<<"\n -->"<<*it2;


    //remove..
    //remove(v.begin,v.end,2)


}
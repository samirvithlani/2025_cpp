#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
//sort()
int main(){

    vector<int> v={100,20,34,56,78,120,1,24,54};
    //sort(v.begin(),v.end());
    //sort(v.begin(),v.end(),greater<int>()); //desc...

    for(auto i:v){
        cout<<"\n"<<i;
    }

    vector<string> v1={"ram","amit","sumit","ziya","neha"};
    sort(v1.begin(),v1.end());
    // for(auto i:v1){
    //     cout<<"\n"<<i;
    // }

    string name = "ramesh";
    sort(name.begin(),name.end());
    cout<<"\n name = "<<name;


    int arr[] = {10,22,30,40,1};
    sort(arr,arr+5);
    for(auto x:arr){
        cout<<"\n"<<x;
    }


}
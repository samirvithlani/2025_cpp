#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
//count_if
int main(){

    vector<int> v={100,20,34,56,78,120,1,24,54};
    
    int c = count_if(v.begin(),v.end(),[](int x){
        return x %2 ==0;
    });

    cout<<"\n c"<<c;

    //string name = "malayalam";


    string data = "programme";
    cout<<"\n"<<*min_element(data.begin(),data.end());
    cout<<"\n"<<*max_element(data.begin(),data.end());

}
// max_element
// min_element
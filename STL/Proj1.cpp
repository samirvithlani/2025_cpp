#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<list>
#include<algorithm>

using namespace std;


int main(){

        queue<pair<int,string>> incomingorders;
        stack<pair<int,string>> failedPayments;
        list<pair<int,string>> completedOrders;
        map<string,int> salesCount;


        incomingorders.push({1,"Laptop"});
        incomingorders.push({2,"Mobile"});
        incomingorders.push({5,"Mobile"});
        incomingorders.push({6,"Mobile"});
        incomingorders.push({3,"Laptop"});
        incomingorders.push({4,"Headphones"});

        //order processeing...
        while(!incomingorders.empty()){

            auto order = incomingorders.front();
            incomingorders.pop();

            //sucess and fail simulate
            if(order.first %2 ==0){
                completedOrders.push_back(order); //list....
                //salesCount[order.second] = 1;
                salesCount[order.second]++;  //map
            }
            else{
                failedPayments.push(order); //1,3
            }
        }

        for(auto o:completedOrders){
            cout<<o.first<<"-->"<<o.second<<endl;
        }
        //retry failed order...
        while(!failedPayments.empty()){
            auto order = failedPayments.top(); //LIFo
            failedPayments.pop();

            completedOrders.push_back(order);
            salesCount[order.second]++;
        }

        cout<<"\n compted orders :\n";
        for(auto o:completedOrders){
            cout<<o.first<<"-->"<<o.second<<endl;
        }

        //anyliss
        auto mostsold = max_element(salesCount.begin(),salesCount.end(),[](auto a,auto b){
            return a.second<b.second;
        });
        cout<<"\n most sold products = "<<mostsold->first<<"---"<<mostsold->second;




}
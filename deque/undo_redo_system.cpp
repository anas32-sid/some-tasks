#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main(){
    deque<string>dq;
    dq.push_back("Filter 1");
    dq.push_back("Filter 2");
    dq.push_back("Filter 3");
    dq.push_back("Filter 4");
    dq.push_back("Filter 5");
    dq.push_back("Filter 6");
    dq.push_back("Filter 7");
    dq.push_back("Filter 8");
    dq.push_back("Filter 9");
    dq.push_back("Filter 10");
    dq.push_back("Filter 11");
    dq.push_back("Filter 12");
    while(dq.size() > 10){
        dq.pop_front();
    }
    cout<<"Total filters: "<<dq.size()<<endl;
    cout<<"All filters"<<endl;
    for(auto x : dq){
        cout<<x<<endl;
    }
}
// Keeps only the last 10 filters in the deque and prints them
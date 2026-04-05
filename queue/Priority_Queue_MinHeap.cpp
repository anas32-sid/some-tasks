#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> p;
    int x;
    cout<<"enter numbers: "<<endl;
    for(int i=0; i<6; i++){
        cin>>x;
        p.push(x);
    }
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}
#include <iostream>
#include <queue>
using namespace std;
int main(){
priority_queue<int> pq;
int n;
for(int i=0; i<5; i++){
cin>>n;
pq.push(n);
}
cout<<endl;
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
}
/*
priority_queue<int,vector<int>,greater<int>> pq;
*/

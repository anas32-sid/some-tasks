#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<string>q;
string name;
string t;
cout<<"enter 5 names: "<<endl;
for(int i=0; i<5; i++){
    cin>>name;
    q.push(name);
}
for(int i=0; i<10; i++){
    t=q.front();
    cout<<q.front()<<" ";
    q.pop();
    q.push(t);
}
}
// Queue Rotation (Circular Queue Simulation)
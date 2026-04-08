#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q1;
    queue<int> q2;
    int n1;
    int n2;
    cout<<"enter 5 numbers for queue 1 "<<endl;
    for(int i=0; i<5; i++){
        cin>>n1;
        q1.push(n1);
    }
cout<<"enter 5 numbers for queue 2 "<<endl;

    for(int i=0; i<5; i++){
        cin>>n2;
        q2.push(n2);
    }
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }

    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
}
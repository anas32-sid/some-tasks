#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"size of vec: "<<v.size()<<endl;
    cout<<"capacity of vec: "<<v.capacity()<<endl;
    cout<<endl;
    cout<<"vector stored these elemetns: "; 

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
// Adds elements to vector, prints its size, capacity, and all elements
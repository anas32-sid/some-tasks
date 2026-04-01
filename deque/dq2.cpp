#include <iostream>
#include <deque>
using namespace std;
int main(){
deque<int>dq;
dq.push_back(100);
dq.push_front(50);
dq.push_back(200);
dq.push_back(10);
//dq=50 100 200 10
cout<<dq[3];
}
// Adds elements to deque and prints the element at index 3
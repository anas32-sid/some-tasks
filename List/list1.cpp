#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l {10, 20, 30};
    
    l.push_back(40); 
    l.push_front(0);    
    for(auto it=l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
// Adds elements to front and back of the list and prints all elements
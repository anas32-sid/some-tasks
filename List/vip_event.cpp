#include <iostream>
#include <list>
using namespace std;
int main(){
list<string> l;

    l.push_back("A");
    l.push_back("B");
    l.push_back("C");

    // anas is vip
    l.push_front("Chief Minister");
    l.push_front("Principal");

    l.pop_front(); // Principal ji gaye event ke andar

    l.sort();

    for(auto x: l){ 
        cout<<x<<", ";
    }
}
// Adds and removes elements in list, sorts it, and prints all strings
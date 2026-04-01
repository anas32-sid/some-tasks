#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l1;
    list<int> l2={10, 20, 30, 40};
    list<int> l3(5, 100);
}
// Demonstrates different ways to create lists: empty, from initializer, and with repeated elements
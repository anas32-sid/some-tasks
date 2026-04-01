#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>l{10, 20, 30, 40, 50, 30, 60};

    for(auto i=l.begin(); i!=l.end(); i++){
        if(*i==30){
            auto temp=i;
            temp++;
            l.erase(temp);
        }
        cout<<*i<<" ";
    }
} 
// Deletes the element after every 30 in the list and prints all elements
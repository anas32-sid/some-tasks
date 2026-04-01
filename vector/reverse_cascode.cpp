#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec{10, 20, 30, 40, 50, 60, 70};
vector<int>:: reverse_iterator i;
    for(auto i=vec.rbegin(); i!=vec.rend(); i++){

        if(*i<=40){
            *i=999;
        }
        cout<<*i<<" ";
    }
} 
// Replaces elements ≤40 with 999 while iterating in reverse and prints them
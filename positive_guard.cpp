#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec{10, -2, 5, -8, 0};

    for(int &x : vec){
        if(x<0){
            x=x*-1;
        };
    }
    for(int x : vec){
        cout<<x<<" ";
    }
}
// Converts negative numbers to positive and prints the vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec{2, 3, 4, 5, 6};

    for(int &x : vec){
        if(x%2==0){
            x=x*x;
        }
    }
    for(int x : vec){
        cout<<x<<" ";
    }
}
// Squares even numbers in the vector and prints all elements
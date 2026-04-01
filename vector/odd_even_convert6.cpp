#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec{1, 2, 3, 4, 5};
    for(int &x : vec){
        if(x%2==0){
            x=1;
        }
        else{
            x=0;
        }
    }
    for(int x : vec){
        cout<<x<<" ";
    }
    return 0;
}
// Converts even numbers to 1
// and odd numbers to 0, then prints the vector

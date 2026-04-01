#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec{10,55, 20, 75, 30, 95};
    vector<int>::iterator i;
    for(i=vec.begin(); i!=vec.end(); i++){
        if(*i<50){
            cout<<*i<<" ";
        }
    }
}
// Prints vector elements that lesser than 50
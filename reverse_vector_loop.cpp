#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec{55, 66, 77, 88, 99, 44, 33, 22};
    for(auto i=vec.rbegin(); i!=vec.rend(); i++){
        cout<<*i<<" ";
    }
}
// Prints all vector elements in reverse order
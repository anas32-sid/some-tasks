#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec{1, 2, 4, 5};
vector<int>::iterator i;
    for(auto i=vec.begin(); i!=vec.end(); i++){
        if(*i==2){
            vec.erase(i);
        }
    cout<<*i<<" ";
    }
} 
// Attempts to remove 2 from the vector while iterating
// and print all elements (but has iterator invalidation issue)
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec{100, 250, 40, 500, 120, 90};
vector<int>:: reverse_iterator i;

    for(auto i=vec.rbegin(); i!=vec.rend(); i++){

        if(*i>200){
            *i=*i-50;
        }
        else if(*i<100){
            //out of stock
            *i=*i*0;
        }
        cout<<*i<<" ";
    }
}
// Decreases elements >200 by 50, sets <100 to 0, and prints in reverse
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> vec(10, 5);
cout<<"capacity: "<<vec.capacity()<<endl;
cout<<"size: "<<vec.size()<<endl;

for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<"-";
}
}
// Creates vector of 10 elements (all 5), prints capacity, size, and elements

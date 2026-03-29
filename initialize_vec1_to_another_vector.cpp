#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v1 = {1, 2, 3,4, 5, 6, 7,8,9};
vector<int> v2 = v1;
for(int i=0; i<v1.size(); i++){
    cout<<v2[i]<<endl;
}
}
// Copies v1 to v2 and prints all elements of v2
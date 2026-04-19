#include <iostream>
#include <vector> 
using namespace std;
class solution{
    public:
vector<int> run(vector<int>& vec){
for(auto &x: vec){
    if(x%2==0){
        x=1;
    }
    else{
        x=0;
    }
}
return vec;
}
};
int main(){
    solution obj;
vector<int>data{1, 2, 3, 4, 5};
vector<int>cach=obj.run(data);
for(auto z: cach){
    cout<<z<<" ";
}
}
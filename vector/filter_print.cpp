#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
vector<int> run(vector<int> & v){
    vector<int>vec;
    vector<int>::iterator i;
     for(i=v.begin(); i!=v.end(); i++){
    if(*i<50){
        vec.push_back(*i);
    }
}
return vec;
}
};

int main(){
solution obj;
vector<int>vecc{10,55, 20, 75, 30, 95};
vector<int> result = obj.run(vecc);
obj.run(vecc);

for(auto x : result){
    cout<<x<<" ";
}
}

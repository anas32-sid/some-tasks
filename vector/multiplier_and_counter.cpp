#include <iostream>
#include <vector>
using namespace std;
class solution {
    public:
    int count=0;
vector <int> run(vector<int>&v){
vector<int> result;
vector<int>::iterator it;
for(it=v.begin(); it!=v.end(); it++){
    if(*it<10){
        count++;
        *it=*it*2;
        }
        result.push_back(*it);
}
return result;
}
};
int main(){

solution obj;
vector<int>data{5, 12, 8, 20, 7, 15};
vector<int> output = obj.run(data);
for(auto x: output){
    cout<<x<<" ";
}
cout << "\nUpdated elements: " << obj.count;
}

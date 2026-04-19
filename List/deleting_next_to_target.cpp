#include <iostream>
#include <list>
using namespace std;
class solution{
    public:
list<int> run(list<int>&list){
    for(auto i=list.begin(); i!=list.end(); i++){
        if(*i==30){
            auto temp=i;
            temp++;
            list.erase(temp);
        }
    }
    return list;

}
};
int main(){
solution obj;
list<int>l{10, 20, 30, 40, 50, 30, 60};
list<int>result=obj.run(l);
for(int x : result){
    cout<<x<<" ";
}
}
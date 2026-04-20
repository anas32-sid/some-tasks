#include <iostream>
#include <string>
#include <utility>
using namespace std;
class solution{
    public:
    void run(){
    pair<int, int> p1 ={1, 4};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int, int>> p2 ={1, {4, 5}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;;

    pair<int, int>arr[]= {{1,2}, {2, 5}, {5, 3}};
    cout<<arr[0].first<<endl;
}
};
int main(){
solution obj;

}
//Demonstrates pairs, nested pairs, and array of pairs with basic access
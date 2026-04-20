#include <iostream>
#include <utility>
#include <vector>
using namespace std;
class solution{
    public:
void run(){
    vector<pair<string, pair<int, double>>> vec;
int count=0;

    vec.push_back({"Smart phone ", {2, 15000.50}});
    vec.push_back({"Headphone ", {0, 2500.00}});
    vec.push_back({"Charger ", {5, 2000}});
    vec.push_back({"cover ",{0, 450.0}});

    for(auto x : vec){
    string name=x.first;
    int quanitity=x.second.first;
    double price =x.second.second;
    double totalprice = quanitity*price;
    
    if(quanitity>0){
        cout<<"Product: "<<name<<totalprice<<endl;
    }
    }
    cout<<"Available products: "<<count;
    count++;
}
};
int main(){
solution obj;
obj.run();
}
// Calculates total price for available products and prints them

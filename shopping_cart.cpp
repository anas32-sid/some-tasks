#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    vector<pair<string, int>> cart;
    cart.push_back({"laptop", 50000});
    cart.push_back({"Mouse", 1200});
    cart.push_back({"keyboard", 2500});
    for(auto p : cart) {

    cout << p.first << " | " << p.second << endl;
    }
}
// Stores product names with prices and prints each item from the cart
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<pair<string, int>> orders;
    string name;
    int orderPrice;
    int count;
    cout << "Enter number of customers: ";
    cin >> count;
    cout << "\nEnter orders (Name Price):\n";
    for (int i=0; i<count; i++) {
        cin>>name>>orderPrice;
        orders.push({name, orderPrice});
    }
    while(!orders.empty()){
        string name=orders.front().first;
        int price=orders.front().second;
        if (price>=500) {
            cout << "[premium Order] Customer: "<<name<<", Price: "<<price<<endl;
        } 
        else {
            cout<<"[normal order] customer: "<<name <<", price: "<<price<<endl;
        }
        orders.pop();
    }
    return 0;
}
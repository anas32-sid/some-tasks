#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string>s;
    string a;
    int n;
    cout<<"how much words u wanna enter: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        s.insert(a);
    }
    for(auto x : s){
        cout<<x<<", ";
    }
}
//finding Unique Words using Set
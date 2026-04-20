#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
int findKthMin(int k, int x) {
    priority_queue<int, vector<int>, greater<int>> q;
    int n;
    for(int i = 0; i < x; i++) {
            cin >> n;
            q.push(n);
        }
    int i = 1;
    while(!q.empty()) {
        if(i == k) {
        return q.top();
        }
    q.pop();
    i++;
}
        return -1; 
    }
};
int main() {
    int k, x;
    cout << "enter which min element u wanna print: " << endl;
    cin >> k;
    cout << "enter how much elements u wanna push in queue: ";
    cin >> x;
    Solution obj;
    int result = obj.findKthMin(k, x);
    if(result != -1){
        cout << k << " element is: " << result;
    }
    else{
        cout << "Invalid k";
    }
    return 0;
}
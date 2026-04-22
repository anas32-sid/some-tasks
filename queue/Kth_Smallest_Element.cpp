#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:

int findKthMin(int indexnumber, int elementsofqueue) {
 priority_queue<int, vector<int>, greater<int>> q; // min heap

    if(indexnumber>elementsofqueue){
        cout<<"Error: k is larger than number of elements";
        return -1;
    }
    int n;
        cout<<"enter elements in queue: ";
            for(int i= 0; i<elementsofqueue; i++){
            cin >> n;
            q.push(n);
        }

        
        int i = 1;
        while(!q.empty()){
            if(i == indexnumber){
                cout<<indexnumber<<" element is: " <<q.top();
                break;
            }
            q.pop();
            i++;
        }
    }
};
int main(){
     Solution obj;
        int indexnumber;
        int n;
        int elementsofqueue;
        cout << "enter which min element u wanna print: " << endl;
        cin >> indexnumber;
        cout << "enter how much elements u wanna push in queue: ";
        cin >> elementsofqueue;

    
    int result = obj.findKthMin(indexnumber, elementsofqueue);

    return 0;
}
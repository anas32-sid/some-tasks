#include <iostream>
#include <vector>
using namespace std;
class solution{
public:
    void run(vector<pair<int, int>> &p1){
        int i = 1;
        for(auto &p: p1){
            int sum = p.first + p.second;

            if(sum % 2 == 0){
                cout<<"pair "<<i<<endl;
                cout<<"sum "<<sum<<endl;

                int product = p.first * p.second;
                cout<<"product "<<product<<endl;
                cout<<endl;
            }
            i++;
        }
    }
};
int main(){
vector<pair<int, int>> p1 = {{1, 3}, {2, 4}, {5, 5}, {7, 8}, {9, 10}};
solution obj;
obj.run(p1);
}

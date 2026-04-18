#include <iostream>
#include <vector>
using namespace std;
class solution {
public:

    void run(vector<int>& vec) {
        for(auto it = vec.begin(); it != vec.end(); ) {
            if(*it == 2) {
                vec.erase(it);
            } else {
                it++;
            }
        }
        
    }
};
int main(){
vector<int>v{1, 2, 4, 5};
solution obj;
obj.run(v);
}

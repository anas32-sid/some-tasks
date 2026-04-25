#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
bool run(vector<int>&a,int target){
    for(int i=0; i<a.size(); i++){
            a[i];

    for(int k=i+1; k<a.size(); k++){
        if(a[i]+a[k]==target){
            return true;
        }    
}
}
return false;
}
};
int main(){
solution obj;
int target=7;
vector<int>n={1, 4, 3, 10};
cout<<obj.run(n, target);
}
//this program is not include self comparing
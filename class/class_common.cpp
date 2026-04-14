#include <iostream>
#include <list>
#include <set>
using namespace std;
class solution{
public:
int arr1[6] = {10, 20, 10, 30, 40, 50};
int arr2[5] = {20, 30, 50, 20, 60};
int n1;
int n2;
set<int> s1;
set<int> s2;
set<int> common;
void solution1(){
    n1= sizeof(arr1) / sizeof(arr1[0]);
    n2= sizeof(arr2) / sizeof(arr2[0]);
    s1=set<int>(arr1, arr1 + n1);
    s2=set<int>(arr2, arr2 + n2);
};
void searching(){
    for(int x: s1){
        if(s2.find(x)!=s2.end()){
            common.insert(x);
        }
    }
    //printing part
    for (int x : common) {
        cout << x << " ";
    }
}
};
int main(){
solution obj;
obj.solution1();
obj.searching();
}
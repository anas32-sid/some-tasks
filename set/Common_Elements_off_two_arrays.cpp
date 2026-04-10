#include <iostream>
#include <set>
using namespace std;
int main(){
    int arr1[]={15, 20, 15, 30, 45, 50, 20};
    int arr2[]={30, 15, 60, 50, 15};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    set<int> s1(arr1, arr1+n1);
    set<int> s2(arr2, arr2+n2);
    set<int> common;

    for(int x : s1){
        if(s2.find(x)!=s2.end()){
            common.insert(x);
        }
    }

    for(int z: common){cout<<z<<"  ";}
}
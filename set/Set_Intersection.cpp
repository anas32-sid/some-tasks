#include <iostream>
#include <set>
using namespace std;
int main(){
int n1, n2;
cout<<"enter the size of first array: ";
cin>>n1;
int arr1[n1];
for(int i=0; i<n1; i++){
    cin>>arr1[i];
}
cout<<"enter the size of second array: ";
cin>>n2;
int arr2[n2];
for(int i=0; i<n2; i++){
    cin>>arr2[i];
}
set<int> s1(arr1, arr1+n1);
set<int> s2(arr2, arr2+n2);
set<int> intersection;

for(int x : s1){
    if(s2.find(x)!=s2.end()){
        intersection.insert(x);
    }
}
cout<<"intersection: ";
for(auto y : intersection){
    cout<<y<<" ";
}
cout<<endl;
}
// Program to find intersection of two arrays using set
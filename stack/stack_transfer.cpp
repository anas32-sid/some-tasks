#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int>num1;
stack<int>num2;
int n;
n=5;
int x;
cout<<"Enter 5 numbers: ";
for(int i=1; i<=n; i++){
cin>>x;
num1.push(x);
}
cout<<endl;
while(!num1.empty()){
    num2.push(num1.top());
    num1.pop();
}
//cout<<endl;
cout<<"Transferring from Stack 1 to Stack 2..."<<endl;
cout<<endl;
cout<<"stack 2 elements (top to bottom)";
cout<<endl;
while(!num2.empty()){
    cout<<num2.top()<<endl;
    num2.pop();
}
}
// Reads 5 numbers into a stack, transfers them to another stack, and prints stack 2
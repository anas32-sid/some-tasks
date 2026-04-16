#include <iostream>
using namespace std;
class bankAccount{
private:
int balance;
public:
void deposite(int amount){
    balance=amount;
}
int withdraw(int request){
    if(request>balance){
    return -1;
    }
    else{
        balance-=request;
        return balance;
    }
}
};
int main(){
bankAccount a;
int n;
int w;
cout<<"deposite amount: ";
cin>>n;
a.deposite(n);
cout<<"withdraw amount: ";
cin>>w;
cout<<a.withdraw(w);
}

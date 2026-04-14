#include <iostream>
using namespace std;
class shop{
private: 
int bill;

public:
void asignvalue(int n){
    bill=n;
}
int getamount(){
    if(bill>1000){
        return bill-100;
    }
    else{
        return bill;
    }
}
};
int main(){
shop s;
int n;
cout<<"enter your bill amount: ";
cin>>n;
s.asignvalue(n);
cout<<s.getamount();
}

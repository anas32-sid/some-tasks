#include <iostream>
using namespace std;
class shop{
    public:
    int calculatebill(int billamaount){
        if(billamaount>1000){
            return billamaount-100;
        }
        else{
            return billamaount;
        }
    }

};
int main(){
shop a;
int n;
cout<<"bill amount: ";
cin>>n;
cout<<a.calculatebill(n);
}

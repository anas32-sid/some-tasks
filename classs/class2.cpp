#include <iostream>
using namespace std;
class exam{
    public:
int checkresult(int marks){
    if(marks>=33){
        return true;
    }
    else{
        return false;
    }
}
};

int main(){
exam a;
int n;
cout<<"enter number: ";
cin>>n;
cout<<a.checkresult(n);
}
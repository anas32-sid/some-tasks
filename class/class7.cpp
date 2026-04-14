#include <iostream>
using namespace std;
class marks{
    public:
char getgrade(int n){
    if(n>0 && n>100){
    }
    if(n>=90){
    return 'A';
    }
    else if(n>=75){
        return 'B';
    }
    else if(n>=50){
        return 'c';
    }
    else{
        return 'F';
    }
}
};
int main(){
    marks a;
int n;
cout<<"enter marks: ";
cin>>n;
char grade=a.getgrade(n);
cout<<"Grade: "<<grade;
}

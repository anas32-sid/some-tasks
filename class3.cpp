#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    int roll;
    string name;
    string address;
    void setmarks(int n){
        marks=n;
    }
    int getmarks(int n){
        return marks;
    }

};
int main(){
student s;
s.roll=10;
s.name="anas";
s.address="delhi";

int n;
cout<<"enter the value of n: ";
cin>>n;

s.setmarks(n);
cout<<s.getmarks(n);
}
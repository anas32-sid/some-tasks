#include <iostream>
using namespace std;
class student {
    private:
int age;
string name;
int marks;
public:
void setdata(string NAME, int AGE, int MARKS){
    if(AGE<0 || MARKS<0){
        cout<<"invalid";
        exit;
        
    }
age=AGE;
name=NAME;
marks=MARKS;
}

void display(){
if(age>0 && age<100 && marks<0 && marks>100){
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Marks: "<<marks<<endl;
}
}

};
int main(){
    student s;
    s.setdata("anas", 0, -1);
    s.display();
}

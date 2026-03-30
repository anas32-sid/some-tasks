#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){

    vector<pair<string, pair<int, int>>> p;
    //                        M    A
    p.push_back({"Anas",   {120, 57}});
    p.push_back({"Rahul",  {72, 92}});
    p.push_back({"Priya",  {95, 92}});
    p.push_back({"Vikram", {40, 92}});
    p.push_back({"Sonia",  {82, 92}});

    for(auto &s : p){
    string name = s.first;
    int marks= s.second.first;
    int attendence = s.second.second;
    double FinalScore=(marks+attendence)/2.0;

    if(attendence>80 && marks>58){
        cout<<name<<" | "<<"Eligible"<<" | "<<FinalScore;
        cout<<endl;
    }

    else {
        cout<<name<<" | "<<"Not Eligible";
        cout<<endl;
    }
    }
}
// Checks eligibility based on marks and attendance, calculates final score, and prints results
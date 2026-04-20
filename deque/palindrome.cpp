#include <iostream>
#include <deque>
using namespace std;
class solution{
    public:

bool run(string word){
    bool palindrome=true;
    deque<char>d;
    for(auto x: word){
        d.push_back(x);
    }
    while(d.size()>1){

    if(d.front()!=d.back()){
        palindrome=false;
        break;
    }
        d.pop_front();
        d.pop_back();

}
return palindrome;
}

};
    int main(){
    string a="level";
    solution obj;
    bool result = obj.run(a);
if(result){
cout<<"palindrome";
}
else{
    cout<<"not";
}
}
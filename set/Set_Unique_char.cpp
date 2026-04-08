#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    set<char>st;
    string word;
    cout<<"enter a word: ";
    cin>>word;
    for(int i=0; i<word.size(); i++){
        st.insert(word[i]);
    }
    cout<<"size of set: "<<st.size()<<endl;
    cout<<"all uniqe alphabets is: ";
    for(char x : st){
        cout<<x<<" ";
    }
}
//finding unique characters in a string using set

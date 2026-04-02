#include <iostream>
#include <deque>
using namespace std;

int main() {

    string word = "RADAR";
    deque<char> dq;

    for(char ch : word){
        dq.push_back(ch);
    }

    bool isPalindrome = true;
    while(dq.size() > 1){

        if(dq.front() != dq.back()){
            isPalindrome = false;
            break;
        }

        dq.pop_front();
        dq.pop_back();
    }

    if(isPalindrome){
        cout << "Palindrome hai";
    }
    else{
        cout << "Palindrome nahi hai";
    }
}
// Checks if a word is a palindrome using a deque
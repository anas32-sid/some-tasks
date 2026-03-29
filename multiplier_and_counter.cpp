#include <iostream>
#include <vector>
using namespace std;
int main(){
int count=0;
    vector<int>data{5, 12, 8, 20, 7, 15};
    vector<int>::iterator i;
    for(i=data.begin(); i!=data.end(); i++){

        if(*i>10){
            count++;
            *i=*i*2;
        }
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"total numbers of conversion: "<<count;
}
// Doubles elements >10, counts them, and prints updated vector
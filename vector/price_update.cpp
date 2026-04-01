#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>price{30, 60, 45, 100, 20,};
vector<int>:: iterator i;

    for(i=price.begin(); i!=price.end(); i++){
        if(*i<50){
            *i=*i-(*i*0.1);
        }
        else{
            *i=*i+20;
        };

        cout<<*i<<" ";
    }
    cout<<endl;
}
// Applies 10% discount for <50 and adds 20 for ≥50, then prints prices
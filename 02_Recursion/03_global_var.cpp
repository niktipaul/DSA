#include <iostream>
using namespace std;

int x = 0;

int fun(int n){
    
    if(n > 0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main(){

    int a = 5;
    cout<<fun(a)<<endl; // Gives 25

    cout<<fun(a)<<endl; // Gives 50 , since x is global variable

    return 0;
}
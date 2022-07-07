#include <iostream>
using namespace std;

int taylor_recursion(int x , int n){
    static int s = 1;
    if (n == 0)
        return s;
    s = 1 + x/n * s;
    return taylor_recursion(x,n-1);
}

int taylor_iterative(int x, int n){
    int s = 1;
    for(;n >0 ; n--){
        s = 1 + x/n * s;
    }
    return s;
}

int main(){
    cout<<"Taylor Series using Recursion: "<<taylor_recursion(4, 2)<<endl;
    cout<<"Taylor Series using Iteration: "<<taylor_iterative(4, 2)<<endl;

}
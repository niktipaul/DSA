#include <iostream>
using namespace std;

int taylorseries(int x, int n){
    static int p = 1, f = 1;
    int result;

    if (n == 0)
        return 1;
    else{
        result = taylorseries(x,n-1);
        p = p * x;
        f = f * n;
        return result + p/f;
    }
}

int main(){
    cout<<"Taylor Series Result: "<<taylorseries(1,4)<<endl;
}
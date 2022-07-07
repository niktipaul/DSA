#include <iostream>
using namespace std;

int fun(int n){
    if (n > 100)
        return n - 10;
    else
        return fun(fun(n+11));
}

int main(){
    printf("%d ",fun(95));  // For any value <100 it gives 91
                            // For any value say a > 100 it gives a - 10
    return 0;
}

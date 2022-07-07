#include <iostream>
using namespace std;

int recursion_fact(int n){
    if (n == 0)
        return 1;
    else
        return recursion_fact(n-1)*n;
}

int iterative_fact(int n){
    int fact = 1;
    if (n == 0)
        return fact;
    for(int i = 1; i < n+1; i++)
        fact = fact * i;
    return fact;
}

int main(){
    printf("Factorial using Recursion: %d\n", recursion_fact(5)); // Using Recursion
    printf("Factorial using Iteration: %d\n",iterative_fact(5));  // Using Loops


}

#include <iostream>
using namespace std;

int recursion_sum(int n){
    if (n == 0)
        return 0;
    else
        return recursion_sum(n-1) + n;
}

int loop_sum(int n){
    int sum = 0;
    if (n == 0)
        return 0;
    for(int i = 1; i < n + 1; i++){
        sum = sum + i;
    }
    return sum;
}

int formula_sum(int n){
    return n * (n + 1) / 2;
}

int main(){
    printf("Sum using Recusion: %d\n",recursion_sum(10));   //Time Complexity O(n); Space Complexity O(n)
    printf("Sum using Loop: %d\n",loop_sum(10));            //Time Complexity O(n); Space Complexity O(1)
    printf("Sum using Formula: %d\n",formula_sum(10));      //Time Complexity O(1); Space Complexity O(1)
}
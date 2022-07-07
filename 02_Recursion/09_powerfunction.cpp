#include <iostream>
using namespace std;

int recursion_power(int m, int n){
    if (n == 0)
        return 1;
    return m*recursion_power(m,n-1);
}

int recursion_power_optimised(int m, int n){
    if (n == 0)
        return 1;
    if (n%2 == 0)
        return recursion_power_optimised(m*m,n/2);
    else
        return m*recursion_power_optimised(m*m, (n-1)/2);
}

int iterative_power(int m, int n){
    int power = 1;

    if(n == 0)
        return 1;
    for(int i = 1; i < n+1; i++)
        power = power * m;
    return power;

}

int main(){

    printf("Power with Recursion %d\n",recursion_power(2,9));
    printf("Power with Recursion Optimised %d\n",recursion_power_optimised(2,9));
    printf("Power using Iteration %d\n",iterative_power(2,9));
}
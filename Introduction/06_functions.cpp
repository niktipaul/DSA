#include <iostream>
using namespace std;

// Creating a function
int add(int a, int b) // Formal parameters (temporary parameters)
{
    int c;
    c = a + b;
    return c;
}

int main(){

    int num1 = 12, num2 = 34, sum; // declaring and initializing variable
    sum = add(num1, num2); // Calling the function with actual parameters

    cout<< "Sum is "<< sum<< endl;


    return 0;
}
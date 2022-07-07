#include <iostream>
using namespace std;

// Creating a function
int add(int a, int b) // Formal parameters (temporary parameters) , Method 1: Call by Value 
{
    // int c;
    // c = a + b;

    a++;
    cout<< a <<endl;
    return 0;
}

//Method 2: Call by Address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int num1 = 12, num2 = 34, sum; // declaring and initializing variable
    sum = add(num1, num2); // Calling the function with actual parameters

    cout<< "Sum is "<< sum<< endl;
    cout<< num1 << endl; // It does't effect the actual parameters

    //Method 2 It actually access the actual parameters using pointers
    swap(&num1,&num2);
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    return 0;
}
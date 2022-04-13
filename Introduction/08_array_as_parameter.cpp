#include <iostream>
using namespace std;

 //Call by address not value 
void fun(int a[], int n)    // void fun(int *a, int n) will also work
{
    //We can not use for each loop upon a POINTER
    for(int i = 0; i < n; i++)
        cout<< a[i] << ", ";
    cout<< endl;
}

// For returning array
int *fun1(int *a, int n) 
{
    //We can not use for each loop upon a POINTER
    a[0] = 20;
    return a;
}

int main(){

    int a[] = {1,2,3,4,5};
    int n = 5;
    int *ptr;

    for(int x: a)
        cout << x <<", ";
    cout << endl;

    fun(a,n);
    ptr = fun1(a,n); // As *a is used, actual elements are altered in the fun1() 

    for(int x: a)
        cout << x <<", ";
    cout << endl;

    for(int i = 0; i < 5; i++){
        cout<< ptr[i] << " ";
    }
    cout << endl;


    return 0;
}
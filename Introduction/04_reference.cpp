#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int &r = a; //&r is the reference of a, r must be declared at the time of in initializaton.

    cout<< a << endl << r <<endl;

    a = 21;
    cout<< a << endl << r <<endl; // changing value of a will change r also

    r = 32;
    cout<< a << endl << r <<endl; // changing value of r will change a also

    //Theoritically reference don't take extra memory space
    //it uses same memory is the original variable.
 
}
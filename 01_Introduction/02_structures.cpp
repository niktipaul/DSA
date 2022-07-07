#include <iostream>
using namespace std;


// Defining a structure
struct Rectangle
{
    int length;
    int breath;
    char rotateable;    // size of Rectangle should be 9 but it gives 12
};

int main(){

    struct Rectangle r1; // Declaration of Sturcture
    struct Rectangle r2 = {5,4}; // Declaration and Initialization

    // Initialization and Accessing 
    r1.length = 3;
    r1.breath = 4;


    cout<<"Size of Recatangle: "<<sizeof(r1);   //Its is easy for the machine to allocate 4+4+44 bytes
    // This adjustment is called Padding

    return 0;

}
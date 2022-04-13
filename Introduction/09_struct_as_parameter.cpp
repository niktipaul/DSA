#include <iostream>
using namespace std;

struct Rectangle
{

int length;
int breath;

};

// Using call by value.
void fun1(struct Rectangle r)
{
    r.length = 20;  // This will not change the actual parameters.
    cout << "Length from fun: " << r.length << endl;
    cout << "Breath from fun: " << r.breath << endl;
}

// Using call by address
void fun2(struct Rectangle *ptr)
{
    ptr->length = 20;  // This will not change the actual parameters.
    cout << "Length from fun: " << ptr->length << endl;
    cout << "Breath from fun: " << ptr->breath << endl;
}

// Returning structure
struct Rectangle *fun3(){

    struct Rectangle *ptr;
    ptr = new Rectangle;    //ptr = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    ptr -> length = 34;
    ptr -> breath = 16;
    return ptr;

}

int main(){

    struct Rectangle r = {23,4};
    struct Rectangle *ptr;

    fun1(r);    // Passing structure value
    cout << "Length :" << r.length << endl;
    cout << "Breath: " << r.breath << endl;

    fun2(&r);   // Passing structure address
    cout << "Length :" << r.length << endl;
    cout << "Breath: " << r.breath << endl;

    ptr = fun3();
    cout << "Length from Pointer :" << ptr->length << endl;
    cout << "Breath from Pointer : " << ptr->breath << endl;



    
    return 0;
}
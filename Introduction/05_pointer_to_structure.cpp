#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};

int main(){

    Rectangle r1 = {10,6}; //In cpp, writing struct is optional
    cout << r1.length << endl;
    cout << r1.breath << endl;

    //Using pointer
    Rectangle *p = &r1;
    cout << p->length << endl;
    cout << p->breath << endl;

    //Dynamic object of structure using pointer
    Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //OR new Rectangle;
    p1->length = 20;
    p1->breath = 10;

    cout << p1->length << endl;
    cout << p1->breath << endl;


    return 0;
}
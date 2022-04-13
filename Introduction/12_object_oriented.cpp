#include <iostream>
using namespace std;


class Rectangle
{

    public:
    int length;
    int breadth;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }


};

int main(){

    
    int l, b;
    cout << "Enter Length and Breadth: " << endl;
    cin >> l>> b;
    Rectangle r = {l,b};

    int a = r.area();
    int p = r.perimeter();
    cout << "Area: "<< a << endl << "Perimeter: " << p << endl; 

}
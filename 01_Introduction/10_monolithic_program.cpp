#include <iostream>
using namespace std;

int main(){

    int length = 0, breadth = 0;
    cout << "Enter Length and Breadth: " << endl;
    cin >> length >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area: "<< area << endl << "Perimeter: " << perimeter << endl; 

    return 0;

}
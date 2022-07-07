#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;

    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}

template <class T>
T Arithmetic<T>::sub(){
    return a - b;
}

int main(){
    Arithmetic<int> ar1(10,5);
    cout<<ar1.add()<<endl;

    Arithmetic<float> ar2(10.5,8.3);
    cout<<ar2.sub()<<endl;

    Arithmetic<char> ar3('a',2);
    cout<<ar3.add()<<endl;
}
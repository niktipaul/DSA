#include <iostream>
using namespace std;

int main(){

    int a[5];   // 4 byte size
    int b[] = {1,2,3,4,5};   // 4 byte size
    int c[] = {1,2,3,4,5,6,7};   // 4 byte size
    a[0] = 12;
    a[1] = 20;
    a[2] = 14;

    int d[10] = {2,5};

    cout<<sizeof(a)<<endl;  // 4 * 5 = 20
    cout<<a[1]<<endl;
    printf("%d\n",a[2]);

    cout<<sizeof(b)<<endl;  // 4 * 5 = 20
    cout<<b[1]<<endl;

    cout<<sizeof(c)<<endl;  // 4 * 7 = 28
    cout<<c[1]<<endl;

    cout<<sizeof(d)<<endl;  // 4 * 7 = 28
    cout<<d[2]<<endl;   //Gives 0
    cout<<d[3]<<endl;   // Gives 0, Uninitialized elements will store 0 as the default value


    // Accessing Elements in array (1)
    for(int i = 0; i < 10; i++){
        cout<<d[i]<<", ";
    }
    cout<<endl;

    // Accessing Elements in array (2) (using for each loop)
    for(int i : c){
        cout<<i<<", ";
    }
    cout<<endl;
    
    // Variabled sized array object
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int e[size];
    e[0] = 45;
    e[3] = 32;
    e[5] = 6;

    for(int i : e){
        cout<<i<<", ";      // 45, 32765, -1158446752, 32, 186044416, 6 (here we see garbage value)
    }
    

    return 0;

}

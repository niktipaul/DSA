#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

 int a = 56;
 int *p;    // Declaring a pointer
 p = &a;    // Address of a is passed to pointer p

 cout<<a<<endl;
 cout<<"Using Pointer: "<< *p << endl;;
 cout<<"Using Pointer: "<< p << " "<< &a;   // gives same value (i.e Address)
 cout<<endl;

 // Passing Array
 int b[5] = {4,3,5,2,7};
 int *p1;
 p1 = b; //& sign not required for array OR (p1 = &b[0]) is logically correct

 for(int i = 0; i < 5; i++){
     cout<<p1[i]<<", ";
 }
 cout<<endl;

// Dynamic Array
int *p2;
p2 = (int*)malloc(5*sizeof(int)); //OR new int[5]; Dynamically created array in Heap Memory
p2[0] = 1;
p2[1] = 2;
p2[2] = 3;
p2[3] = 4;
p2[4] = 5;

for(int i = 0; i < 5; i++){
     cout<<p2[i]<<", ";
 }

 delete [] p2; // free(p2);

 //Interesting point about pointer is that whatever the datatype of the variable is,
 //Pointer will take the same memory size (i.e 8 bytes, previously it was 4 bytes)




}
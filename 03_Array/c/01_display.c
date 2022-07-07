#include <stdio.h>
#include <stdlib.h>


// Declaring custom array structure
struct Array
{
    int arr[20];
    int length;
    int size;
};


// Displaying array
void display(struct Array *arr)
{
    for(int i = 0; i < arr->length; i++)
    {
        printf("%d ",arr->arr[i]);
    }
    printf("\n");
}


// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);      
}

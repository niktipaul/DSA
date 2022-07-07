#include <stdio.h>
#include <stdlib.h>

// Declaring Array Structure
struct Array
{
    int arr[20];
    int length;
    int size;
};

// To display array
void display(struct Array *arr)
{
    for(int i = 0; i < arr->length; i++)
    {
        printf("%d ",arr->arr[i]);
    }
    printf("\n");
}

//left Shifting
void leftShift(struct Array *arr)
{
    // int temp = arr->arr[0];
    for(int i = 1; i < arr->length; i++)
    {
        arr->arr[i-1] = arr->arr[i]; 
    }
    arr->arr[arr->length-1] = 0;

}

//Reversing array by swapping end elements
void rightShift(struct Array *arr)
{
    // int temp = arr->arr[0];
    for(int i = arr->length-1; i > 0; i--)
    {
        arr->arr[i] = arr->arr[i-1] ; 
    }
    arr->arr[0] = 0;
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("After left shifting array\n");
    leftShift(&myarray);
    display(&myarray);  
    printf("After right shifting array\n");
    rightShift(&myarray);
    display(&myarray); 
}


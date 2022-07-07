#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int arr[20];
    int length;
    int size;
};

void display(struct Array *arr)
{
    for(int i = 0; i < arr->length; i++)
    {
        printf("%d ",arr->arr[i]);
    }
    printf("\n");
}

// Code to append element at the end of Array
void append(struct Array *arr, int element)
{
    if(arr->length < arr->size)
        arr->arr[arr->length++] = element;
    else
        printf("Array index out of bound!!");
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("After inserting 99\n");
    append(&myarray,99);
    display(&myarray);    
}
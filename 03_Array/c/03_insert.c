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

//Inserting element at perticular index
void insert(struct Array *arr, int index, int element)
{
    if (arr->length < arr->size)
    {
        for(int i = arr->length; i > index; i--)
        {
            arr->arr[i] = arr->arr[i-1];
        }
        arr->arr[index] = element;
        arr->length++;
    }
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("After inserting 99\n");
    insert(&myarray,4,99);
    display(&myarray);    
}


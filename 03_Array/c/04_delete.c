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

// Deleting element from array
int delete(struct Array *arr, int index)
{
    for(int i = index; i < arr->length-1; i++)
    {
        arr->arr[i] = arr->arr[i+1];
    }
    arr->length--;
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("After Deleting from index 4\n");
    delete(&myarray,4);
    display(&myarray);    
}


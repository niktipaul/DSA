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
int linearSearch(struct Array *arr, int element)
{
    for(int i = 0; i < arr->length; i++)
    {
        if(element == arr->arr[i])
            return i;
    }
    return -1;
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("Element 10 found at index %d\n",linearSearch(&myarray,10));
  
}


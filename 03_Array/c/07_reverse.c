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

//Reversing Array using auxilary array
void auxReverse(struct Array *arr)
{
    int newArray[20];
    for(int i = arr->length-1, j = 0; i >= 0; i--, j++)
    {
        newArray[j] = arr->arr[i];
    }

    for(int i = 0; i < arr->length; i++)
    {
        arr->arr[i] = newArray[i];
    }
}

//Reversing array by swapping end elements
void swapReverse(struct Array *arr)
{
    int left = 0, right = arr->length-1;
    while(left < right)
    {
        int temp = arr->arr[left];
        arr->arr[left] = arr->arr[right];
        arr->arr[right] = temp;
        left++;
        right--;
    }
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    display(&myarray);    
    printf("After reversing array using auxilary array\n");
    auxReverse(&myarray);
    display(&myarray);  
    printf("After reversing array using swap array\n");
    swapReverse(&myarray);
    display(&myarray); 
}


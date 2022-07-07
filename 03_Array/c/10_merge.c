#include <stdio.h>
#include <stdlib.h>

// Declaring Array
struct Array
{
    int arr[20];
    int length;
    int size;
};

// Merging two sorted arrays
struct Array* merge(struct Array *arr1,struct Array *arr2)
{
    struct Array *arr3;
    arr3 = (struct Array*)malloc(sizeof(struct Array));
    int i = 0, j = 0, k = 0 ;

    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->arr[i] <= arr2->arr[j])
            arr3->arr[k++] = arr1->arr[i++];
        else
            arr3->arr[k++] = arr2->arr[j++];
    }

    for( ;i < arr1->length; i++)
        arr3->arr[k++] = arr1->arr[i];

    for( ;j < arr2->length; j++)
        arr3->arr[k++] = arr2->arr[j];

    arr3->length = arr1->length + arr2->length;
    return arr3;
    
}

//// Displaying array
void display(struct Array *arr)
{
    for(int i = 0; i < arr->length; i++)
    {
        printf("%d ",arr->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct Array myarray1 = {{3, 8, 16, 20, 25}, 5, 20};
    struct Array myarray2 = {{4, 10, 12, 22, 23}, 5, 20};
    struct Array *result = merge(&myarray1, &myarray2);
    display(result);      
}
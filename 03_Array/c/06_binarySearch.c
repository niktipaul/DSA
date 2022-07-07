#include <stdio.h>
#include <stdlib.h>

// Declaring Array
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

// Iterative Binary Search Algorithm
int ibinarySearch(struct Array *arr,int key)
{
    int left, right, middle;
    left = 0;
    right = arr->length-1;

    while(left <= right)
    {
        middle = (left + right) / 2;
        if(key == arr->arr[middle])
            return middle;
        else if(key < arr->arr[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}

//Recursive Binary Search
int rbinarySearch(struct Array *arr, int left, int right, int key)
{
    int middle;
    if(left <= right)
    {
        middle = (left + right) / 2;
        if(key == arr->arr[middle])
            return middle;
        else if(key < arr->arr[middle])
            return rbinarySearch(arr,left,middle-1,key);
        else
            return rbinarySearch(arr,middle+1,right,key);
    }
    return -1;
}

// main method
int main()
{
    struct Array myarray = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 15, 20};
    display(&myarray);    
    printf("(Iterative) Element 10 found at index %d\n",ibinarySearch(&myarray,10));
    printf("(Recursive) Element 10 found at index %d\n",rbinarySearch(&myarray,0,15,10));
  
}





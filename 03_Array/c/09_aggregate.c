#include <stdio.h>

// Declaring Array Structure
struct Array
{
    int arr[20];
    int length;
    int size;
};

// To find sum of all elements of an array
int suma(struct Array *arr)
{
    int summation = 0;
    for(int i = 0; i < arr->length; i++)
    {
        summation += arr->arr[i];
    }
    return summation;
}

// To find maximum in an array
int maxi(struct Array *arr)
{
    int maximum = arr->arr[0];
    for(int i = 1; i < arr->length; i++)
    {
        if(arr->arr[i] >= maximum)
            maximum = arr->arr[i];
    }
    return maximum;
}

// To find minimum in an array
int mini(struct Array *arr)
{
    int minimum = arr->arr[0];
    for(int i = 1; i < arr->length; i++)
    {
        if(arr->arr[i] <= minimum)
            minimum = arr->arr[i];
    }
    return minimum;
}

// To find avg of all elements of an array
int avge(struct Array *arr)
{
    int summation = 0;
    for(int i = 0; i < arr->length; i++)
    {
        summation += arr->arr[i];
    }
    return summation/arr->length;
}

// main method
int main()
{
    struct Array myarray = {{8, 9, 4, 7, 6, 3, 10, 5, 14, 2}, 10, 20};
    printf("Sum of all elements = %d\n",suma(&myarray));
    printf("Average of all elements = %d\n",avge(&myarray));
    printf("Maximum of all elements = %d\n",maxi(&myarray));
    printf("Minimum of all elements = %d\n",mini(&myarray));

}

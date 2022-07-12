// To find missing element from first n natural numbers

#include <iostream>
using namespace std;


void inputArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int sum(int *arr, int size)
{
    int s = 0;
    for(int i = 0; i < size; i++)
    {
        s += arr[i];
    }
    return s;
}

// For one missing element from sorted sequence starting from 1
int missingElement(int *arr,int size)
{
    int forsum, actualsum;
    forsum = arr[size-1]*(arr[size-1]+1)/2;
    actualsum = sum(arr,size);
    return forsum - actualsum;
}

// For one missing element from sorted sequence starting from any number
int missingElement2(int *arr, int size)
{
    int difference = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(difference != (arr[i]-i))
            return difference + i;
    }
    return -1;


}

//For more than one missing elements from a sorted sequence starting from any number
void missingElement3(int *arr,int size)
{
    int difference = arr[0];
    for(int i = 0; i < size; i++)
    {
        while(difference != (arr[i]-i))
        {
            cout << difference + i << " "; 
            difference++;

        }
    }
}

//For more than one missing elements from unsorted sequence using Hash table
void missingElement4(int *arr, int size)
{
    int *hash;
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max <= arr[i])
            max = arr[i];
    }
    hash = new int[arr[max+1]];

    for(int i = 0; i <= max; i++)
    {
        hash[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    for(int i = 1; i <= max; i++)
    {
        if(hash[i] == 0)
            cout << i << " ";
    }
}


int main()
{
    int *arr;
    int size;
    cout << "Enter size of n: ";
    cin >> size;
    arr = new int[size];
    inputArray(arr,size);
    cout << "Missing Element/(s): ";
    missingElement4(arr,size);

}
#include <iostream>
using namespace  std;

void inputArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}


// Printing elements whose sum is k in an unsorted array
void sumPair(int *arr, int size, int k)
{
    int i = 0, j;
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == k)
            {
                cout << arr[i] << " + " << arr[j] << " = "<< k << endl;
            }
        }
    }
}

// Printing elements whose sum is k in an unsorted array using hash table
void sumPair2(int *arr, int size, int k)
{
    int max = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int *hash;
    hash = new int[max+1];

    for(int i = 0; i < size; i++)
    {
        if(hash[k-arr[i]] != 0)
            cout << arr[i] << " + " << k-arr[i] << " = " << k << endl;
        hash[arr[i]]++;
    }
}

//Printing elements whose sum is k in a sorted array
void sumPair3(int *arr,int size, int k)
{
    int l,r;
    l = 0;
    r = size-1;

    while(l < r)
    {
        if(arr[l] + arr[r] == k)
        {
            cout << arr[l] << " + " << arr[r] << " = " << k << endl;
            l++;
            r--;
        }
        else if(arr[l] + arr[r] < k)
            l++;
        else    
            r--;
    }
}

int main()
{
    int *arr;
    int size, k;
    cout << "Enter size: ";
    cin >> size;
    arr = new int[size];
    inputArray(arr,size);
    cout << "Enter k: ";
    cin >> k;
    // sumPair2(arr,size,k);
    sumPair3(arr,size,k);
}

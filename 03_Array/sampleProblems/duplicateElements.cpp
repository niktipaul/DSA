#include <iostream>
using namespace std;

void inputArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// Finding duplicate elements in a sorted list
void findDuplicate(int *arr, int size)
{
    int lastDuplicate = 0;
    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] == arr[i+1] && arr[i] != lastDuplicate)
        {
            cout << arr[i] << " ";
            lastDuplicate = arr[i];
        }
    }
    cout << "\n";
}

// Counting duplicate elements
void countDuplicate(int *arr, int size)
{
    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            int j = i+1;
            while(arr[j] == arr[i])
            {
                j++;
            }
            cout << "Duplicate Element: " << arr[i] << " Frequency: "<< j-i << endl; // 2,3,4,4,4,4,5
            i = j-1;
        }
    }
    cout << "\n";
}

// Finding duplicate using hash table
void hashDuplicate(int *arr, int size)
{
    int *hash;
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max <= arr[i])
            max = arr[i];
    }
    hash = new int[arr[max+1]];


    for(int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    for(int i = 1; i <= max; i++)
    {
        if(hash[i] > 1)
            cout << "Duplicate Element: "<< i << " Frequency: "<< hash[i] << endl;
    }
}


int main()
{
    int *arr;
    int size;
    cout << "Enter size: ";
    cin >> size;
    arr = new int[size];
    inputArray(arr,size);
    cout << "Duplicate Elements is/are: ";
    findDuplicate(arr,size);
    countDuplicate(arr,size);
    hashDuplicate(arr,size);
}
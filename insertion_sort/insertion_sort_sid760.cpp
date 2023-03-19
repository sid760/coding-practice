// 19/03/2023 Siddharth Mishra
// insertion sort algorithm using iterative and recursive approach
#include <iostream>
using namespace std;

// iterative method
void insertion_sort(int *arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        for(int j = i-1; j >= 0; j--)
        {
            if(key < arr[j]) arr[j+1] = arr[j];
            else
            {
                arr[j+1] = key;
                break;
            }
        }
    }
}

// helper function - for insertion operation
void insert(int *arr, int n, int key)
{
    if(n > 0) // subarray length is from 0 to n-1,
    {
        if(key < arr[n-1]) arr[n] = arr[n-1];
        else 
        {
            arr[n] = key;
            return;
        }
        insert(arr, n-1, key);
    }
    else arr[n-1] = key;
}

// recursive method
void insertion_sort_recur(int *arr, int n)
{
    if(n > 1)   // since want to decrement till n-1 = 1, so that arr[n-1] starts from arr[1]
    {
        insertion_sort_recur(arr, n-1);
        int key = arr[n-1]; // element to be inserted into subarray
        insert(arr, n-1, key); // insertion operation(also recursive)
    }
}

void printArr(int *a, int n)
{
    for(int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int a[] = { 2, 3, 10, 13, 5 };
    int n = sizeof(a) / sizeof(a[0]);

    printArr(a, n);
    insertion_sort_recur(a, n);
    printArr(a, n);

    return 0;
}
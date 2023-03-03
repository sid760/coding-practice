// 24/02/2023 program to recursively check if an array is sorted or not

#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if(n > 2)
    {
        if(arr[n-1] >= arr[n-2]) return isSorted(arr, n-2);
        else return false;
    }
    return true;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "array arr is sorted : " << boolalpha << isSorted(arr, n) << endl;

    int arr1[] = {-1,5,6,0,-5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "array arr1 is sorted : " << boolalpha << isSorted(arr1, n1) << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int binary_search_recur(int *arr, int start, int end, int key)
{
    int mid = (start + end) / 2;
    sort(arr+start, arr+end);
    if(arr[mid] == key) return mid;
    else
    {
        if(key < arr[mid])
        {
            return binary_search_recur(arr, start, mid-1, key);
        }
        else if(key > arr[mid]) return binary_search_recur(arr, mid+1, end, key);
        else return -1;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    cout << binary_search_recur(arr, 0, 4, 3) << endl;

    return 0;
}
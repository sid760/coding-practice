// 04/03/2023
// Siddharth Mishra
#include <iostream>
using namespace std;

// linear search using recursion that return index of key in array
int linear_search_recur(int *arr, int n, int key)
{
    if(n > 1)
    {
        if(arr[n-1] == key)
            return n-1;
        return linear_search_recur(arr, n-1, key);
    }
    else return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    cout << linear_search_recur(arr, 5, 3) << endl;
    cout << linear_search_recur(arr, 5, -3);

    return 0;
}
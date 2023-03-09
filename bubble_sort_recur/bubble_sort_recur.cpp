// 06/03/2023
#include <iostream>
using namespace std;

//  RECURSIVE
void bubble_sort_swap(int *arr, int start, int end)
{
    if(end > start)
    {
        if(arr[start] > arr[start+1])
        {
            swap(arr[start], arr[start+1]);
        }
        bubble_sort_swap(arr, start+1, end);
    }
}

void bubble_sort_recur(int *arr, int n)
{
    if(n > 0)
    {
        bubble_sort_swap(arr, 0, n-1);
        bubble_sort_recur(arr, n-1);
    }
}

// ITERATIVE
void bubble_sort(int *a, int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < i-1; j++)
        {
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main()
{
    int arr[] = { 1, -2, 3, -4, 5 };
    bubble_sort_recur(arr, 5);
    for(auto &i: arr) cout << i << " ";
    cout << endl;

    bubble_sort(arr, 5);
    for(auto &i: arr) cout << i << " ";

    return 0;
}
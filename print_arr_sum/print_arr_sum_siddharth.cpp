#include <iostream>
using namespace std;

int print_arr_sum(int *arr, int n)
{
    int sum = 0;
    if(n > 0)
    {
        sum = sum + arr[n-1] + print_arr_sum(arr, n-1);
        cout << arr[n-1] << " ";
        return sum;
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = print_arr_sum(arr, n);
    cout << "sum of arr is " << sum << endl;
    return 0;
}
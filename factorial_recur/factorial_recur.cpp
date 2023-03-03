#include <iostream>
using namespace std;

int factorial_recur(int n)
{
    if(n > 0)
    {
        return n * factorial_recur(n-1);
    }
    else return 1;
}

int main()
{
    int n = 5;
    cout << factorial_recur(n) << endl;

    return 0;
}
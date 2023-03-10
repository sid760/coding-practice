#include <iostream>
using namespace std;

// recursive function that returns gcd of two integers
int gcd(int a, int b)
{
    if(a > b) return gcd(b, a);
    else if(a == 0) return b;
    else
    {
        return gcd(b-a, a);
    }
}
int main()
{
    cout << gcd(5, 30);

    return 0;
}
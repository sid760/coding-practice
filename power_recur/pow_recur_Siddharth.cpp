// Program to find power of a number using recursion
#include <iostream>
using namespace std;

double pow_recur(double num, double pow)
{
    if(pow > 0)
    {
        return num * pow_recur(num, pow - 1);
    }
    else return 1;
}

int main()
{
    cout << pow_recur(2, 5) << endl;
    return 0;
}
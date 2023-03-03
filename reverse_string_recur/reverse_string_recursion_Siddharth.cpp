// 24/02/2023

#include <iostream>
using namespace std;

// Reverse a string using recursion
string reverseString(string s, int n)
{
    string result;
    if(n >= 0)
    {
        result += s[n] + reverseString(s, n-1);
    }
    return result;
}

int main()
{
    cout << "reverse of happy is: " << reverseString("happy", 5);
   
    return 0;
}
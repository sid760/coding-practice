// Siddharth Mishra 10/03/2023
#include <iostream>
using namespace std;

// function to calculate no. of digits and sum of digits of an integer
// the function returns a pair of int, where first is the count and second is sum
pair<int, int> digit_sum_recur(int n)
{
    pair<int, int> res (0, 0);
    if(n > 0)
    {
        int x = n % 10;
        pair<int, int> a = digit_sum_recur(n/10);
        res.first += (1 + a.first);
        res.second += (x + a.second);
        return res;
    }
    else return res;
}

int main()
{
    int n = 201411;
    pair<int, int> ans;
    ans = digit_sum_recur(n);
    
    cout << "no. of digits in " << n << " is " << ans.first << endl;
    cout << "sum of digits of " << n  << " is " << ans.second << endl;

    return 0;
}
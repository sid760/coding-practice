// 24/02/2023 
#include <iostream>
using namespace std;


//  Print 1 to n using recursion
void print1toN(int n)
{
    if(n > 0)
    {
        print1toN(n-1);
        cout << n << " ";
    }
    else cout << endl;
}

int main()
{
    print1toN(10);
    
    return 0;
}
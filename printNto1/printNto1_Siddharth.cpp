// 24/02/2023 
#include <iostream>
using namespace std;

//  Print n to 1 using recursion
void printNto1(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        printNto1(n-1);
    }
    else cout << endl;
}

int main()
{
    printNto1(10);
    
    return 0;
}
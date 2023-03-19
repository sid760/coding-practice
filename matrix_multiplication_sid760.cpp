#include <iostream>
using namespace std;

void printMatrix(int A[3][3])
{
    for(int a = 0; a < 3; a++)
    {
        for(int b = 0; b < 3; b++)
            cout << A[a][b] << " ";

        cout << endl;
    }
}

void sumMatrix(int a[3][3], int b[3][3], int sum[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];
    }
}

int main()
{
    int a[3][3] = { {1,2,3}, {2,3,4}, {3,4,5} };
    cout << "matrix a = " << endl;
    printMatrix(a);

    int b[3][3] = { {1,2,3}, {2,3,4}, {3,4,5} };
    cout << endl << "matrix b = " << endl;
    printMatrix(b);

    int c[3][3];
    sumMatrix(a, b, c);
    cout << endl << "sum of a and b = " << endl;

    printMatrix(c);
    
    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

string strrev(string str)
{
    string res;
    stack<char> stack;

    int i = 0;
    while (str[i])
    {
        stack.push(str[i]);
        i++;
    }

    while (!stack.empty())
    {
        res += stack.top();
        stack.pop();
    }
    return res;
}

int main()
{

    string greet = "hello";
    cout << "string is " << greet << endl;
    cout << "reverse of string is " << strrev(greet) << endl;

    return 0;
}
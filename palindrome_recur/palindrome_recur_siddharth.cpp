// 03/03/2023
// status working

#include <iostream>
using namespace std;

// recursive function to check if a string is palindrome or not
bool isPalindrome(string s, int n)
{
    if(n >= 1)
    {
        return (s[n-1] == s[s.size()-n]) & isPalindrome(s, n-1);
    }
    else return true;
}

int main()
{
    string s = "happy";
    string s1 = "madam";
    
    cout << s << " is palindrome: " << boolalpha << 
        isPalindrome(s, s.size()) << endl;
    cout << s1 << " is palindrome: " << boolalpha <<
        isPalindrome(s1, s.size()) << endl;

    cout << isPalindrome("ama9ama", 4);
    return 0;
}
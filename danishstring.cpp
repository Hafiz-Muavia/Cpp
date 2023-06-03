#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, str1, str2;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i <= str.size() - 1; i++)
    {
        str1 = str1 + str[i];
    }
    for (int i = str.size() - 1; i >= 0; i--)
    {
        str2 = str2 + str[i];
    }
    if (str1 == str2)
    {
        cout << "The string is a palindrome!!!";
    }
    else
    {
        cout << "The string is not a palindrome!!!";
    }
    return 0;
}
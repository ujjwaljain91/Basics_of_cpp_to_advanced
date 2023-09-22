#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string :";
    cin >> s;
    string original=s;
    reverse(s.begin(), s.end());
    if (original==s)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a palindrome number :";
    }

    return 0;
}

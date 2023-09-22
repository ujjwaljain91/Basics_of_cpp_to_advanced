#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int originalNumber = n; // Store the original number
    int reverseNumber = 0;

    while (n != 0)
    {
        int ld = n % 10;
        reverseNumber *= 10;
        reverseNumber += ld;
        n /= 10;
    }
    int sum = originalNumber + reverseNumber;
    cout << "Original number: " << originalNumber << endl;
    cout << "Reverse number: " << reverseNumber << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}
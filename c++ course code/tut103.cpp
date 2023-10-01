#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter  a number =";
    cin >> n;
    for (row = n; row >= 1; row = row - 1)
    {
        for (col = 1; col <= n - row; col = col + 1)

            cout << " ";

        for (col = 1; col <= 2 * row - 1; col = col + 1)

            cout << "*";
        cout << endl;
    }
}
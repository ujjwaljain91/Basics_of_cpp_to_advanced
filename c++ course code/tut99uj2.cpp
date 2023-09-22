#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (s.length() >= 6) {
        // Reverse characters in positions 2 to 5 (0-based indexing)
        for (int i = 2, j = 5; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
        cout << "Reversed string: " << s << endl;
    } else {
        cout << "String is too short to reverse positions 2 to 5." << endl;
    }

    return 0;
}

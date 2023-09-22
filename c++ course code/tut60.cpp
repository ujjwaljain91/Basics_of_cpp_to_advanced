#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "ujjwal jain";
    string st2;
    // opening files using constructors and writing it
    ofstream out("sample60.txt");
    out << st;
    // opening files using constructors and reading it
    ifstream in("sample60b.txt");
    in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}
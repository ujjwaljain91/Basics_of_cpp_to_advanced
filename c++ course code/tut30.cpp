#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex a(4, 6);
    complex b = complex(5, 7);
    a.printnumber();
    b.printnumber();
    return 0;
}
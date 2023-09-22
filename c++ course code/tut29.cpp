#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(void)
{
    a = 10;
    b = 20;
}

int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}
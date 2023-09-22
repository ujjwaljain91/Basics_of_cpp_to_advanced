#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {

        a = 1;
        b = 4;
    }

    complex(int x = 2, int y = 3)
    {
        a = x;
        b = y;
    }
    complex(int x = 4)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 6);
    c1.printnumber();

    complex c2(1,2);
    c2.printnumber();

    complex c3(1,5);
    c3.printnumber();

    return 0;
}
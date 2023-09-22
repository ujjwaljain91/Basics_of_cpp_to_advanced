#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring functions as a friend
    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumcompcomplex(complex, complex);
    // Aliter :: declaring the entire class as a friend 
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2){

    return (o1.a + o2.a);
}
int calculator::sumcompcomplex(complex o1, complex o2){

    return (o1.b + o2.b);
}




int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
class simplecalculator1
{
protected:
    int value1;

public:
    void set_simplecalculator1(int a)
    {
        value1 = a;
    }
};
class simplecalculator2
{
protected:
    int value2;

public:
    void set_simplecalculator2(int a)
    {
        value2 = a;
    }
};
class derived : public simplecalculator1, public simplecalculator2
{
    public:
    void show()
    {
        cout<<"PROGRAM FOR SIMPLE CACULATOR"<<endl;
        cout << "The sum of these value is " << value1 + value2 << endl;
        cout << "The subtraction of these value is " << value1 - value2 << endl;
        cout << "The multiply of these value is " << value1 * value2 << endl;
        
        if (value2 != 0) // Check for division by zero
            cout << "The division of these values is " << static_cast<double>(value1) / value2 << endl;
        else
            cout << "Cannot divide by zero." << endl;
    }
};

int main()
{
    derived calculator;
    int first;
    int second;
    cout << "enter the first value" << endl;
    cin >> first;
    cout << "enter the second value " << endl;
    cin >> second;
    calculator.set_simplecalculator1(first);
    calculator.set_simplecalculator2(second);
    calculator.show();

    
    return 0;
}
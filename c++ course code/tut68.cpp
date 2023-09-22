#include <iostream>
using namespace std;
template <class t>
class ujjwal
{
public:
    t data;
    ujjwal(t a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};
template <class t>
class Ujjwal
{
public:
    t data;
    Ujjwal(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void Ujjwal<t>::display()
{
    cout << data;
}

int main()
{
    Ujjwal<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}
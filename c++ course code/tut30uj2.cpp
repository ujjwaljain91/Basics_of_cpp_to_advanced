#include <iostream>
#include <math.h>
using namespace std;
class coordinate
{
private:
    int x1, y1,  x2, y2 ;

public:
    void get()
    {
        cout << "1. point X1 value: ";
        cin >> x1;

        cout << "1. point Y1 value: ";
        cin >> y1;

        cout << "2. point X2 value: ";
        cin >> x2;

        cout << "2. point Y2 value: ";
        cin >> y2;

       
    }

    void calculate()
    {
        float distance;
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) );
        cout << "Distance between 2 points: " << distance << endl;
    }
};

int main()
{
    coordinate c;
    c.get();
    c.calculate();

    return 0;
}
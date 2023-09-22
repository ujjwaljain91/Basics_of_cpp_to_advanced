#include <iostream>
using namespace std;
template <class t1, class t2, class t3, class t4>
class Animals
{
public:
    t1 legs;
    t2 nose;
    t3 eyes;
    t4 ears;
    Animals(t1 a, t2 b, t3 c, t4 d)
    {
        legs = a;
        nose = b;
        eyes = c;
        ears = d;
    }
    void display()
    {
        cout<<"Animal kingdom"<<endl;
        cout<<"Tiger legs is "<<legs<<endl;
        cout<<"Tiger nose is "<<nose<<endl;
        cout<<"Tiger eyes is "<<eyes<<endl;
        cout<<"Tiger ears is "<<ears<<endl;
    }
};   
int main()
{
    Animals<int, int, int, int> obj(2, 1, 2, 2);
    obj.display();
    return 0;
}

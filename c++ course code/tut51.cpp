#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main(){

    complex *ptr = new complex;
    ptr->setdata(1,54);
    ptr->getdata();

    complex *ptr1 = new complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();

   
    return 0;
}
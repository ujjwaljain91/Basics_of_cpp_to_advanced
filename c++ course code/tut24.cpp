#include <iostream>
using namespace std;
class employee
{

    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << "and this is employee number " << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

 int employee::count; 

int main()
{
    employee rocky, rohit, arun;
    rocky.setdata();
    rocky.getdata();
    employee::getcount();

    rohit.setdata();
    rohit.getdata();
    employee::getcount();

    arun.setdata();
    arun.getdata();
    employee::getcount();

    return 0;
}
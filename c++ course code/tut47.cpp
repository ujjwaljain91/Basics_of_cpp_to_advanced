#include <iostream>
#include <math.h>
using namespace std;
class scientificcalculator{
    int a,b;
    public:
    void getdatascientific()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;

    }
    void performoperationscientific()
    {
        cout<<"the value of cos(a) is :"<<cos(a)<<endl;
        cout<<"the value of sin(a) is :"<<sin(a)<<endl;
        cout<<"the value of exp(a) is :"<<exp(a)<<endl;
        cout<<"the value of tan(a) is :"<<tan(a)<<endl;
        cout<<"the value of log(a) is :"<<log(a)<<endl;

    }
};
int main(){
    scientificcalculator calc;
    calc.getdatascientific();
    calc.performoperationscientific();

    return 0;
}
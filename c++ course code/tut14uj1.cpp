#include <iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;

};
int main(){
enum Meal {breakfast,lunch, dinner};
Meal m1= lunch;
cout<<(m1==2);
    // union money m1;
    // m1.rice = 34;
    // m1.car= 'c';
    // cout<<m1.car;
    return 0;
}
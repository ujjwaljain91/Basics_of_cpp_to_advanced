#include <iostream>
using namespace std;

int main()
{
    // ********************************printing the gp****************************************8
    // int n;
    // cout << "enter the number : ";
    // cin >> n;
    // int a=3;
    // for (int i = 0; i <=n; i++)
    // {
    //     cout<<a<<" ";
    //     a=a*4;
    // }
    // printing the highest factor 
    int n;
    cout << "enter the number : ";
    cin >> n;
    int a=3;
    int f=1;
    for (int i = 1; i <n; i++)
    {
        if (n%i==0) 
        f=i;
    }
    cout<<f;
    return 0;
}
// ***************Manupilators**************
#include <iostream>
#include<iomanip>

using namespace std;

int main(){
//  *************************Setw function is used to give space between the variables*********************
    int a=3, b=78, c=1223;
    // *****************without setw function  **************
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;

//************************** with setw function****************

    cout<<"The value of a with setw is:"<<setw(24)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(60)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
    return 0;

}


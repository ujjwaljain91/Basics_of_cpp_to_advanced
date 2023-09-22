#include <iostream>
using namespace std;

int c= 45;

int main(){
    int a ,b,c;
    
// *****************build in data type*****************
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    c= a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;
    /*:: this implies scope resolution operators*/
    /* by default operator is local operator*/


    
    return 0;

}
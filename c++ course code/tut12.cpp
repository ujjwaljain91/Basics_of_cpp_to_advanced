#include <iostream>
using namespace std;

int main(){
    int a=3;
    int* b= &a;
    //  &-------> (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;


    //  *----------->(value at) dereference operator 
    cout<<"The value at address b is "<<*b<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address  c is "<<*c<<endl;
    cout<<"The value at address_at(value_at(c)) c is "<<**c<<endl;



    return 0;
}
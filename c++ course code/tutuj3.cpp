// *****************Typecasting***************
// typecasting is used to change the datatype of the function 

#include <iostream>
using namespace std;

int main(){
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(float)a<<endl;
    int c = int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+float(b)<<endl;
    return 0;

    

}
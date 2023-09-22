#include <iostream>
using namespace std;

  inline int product(int a, int b){
    // static int c=0;
    // c= c+1;
    return a*b;
}


int main(){
    int a,b;
    cout<<"ENTER the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
    cout<<"The value of a and b is"<<product(a,b)<<endl;
     
    return 0;
}
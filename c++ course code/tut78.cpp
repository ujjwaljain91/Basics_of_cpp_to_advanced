#include <iostream>
using namespace std;

int main(){
      int a,b,c;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"enter the value of c "<<endl;
    cin>>c;
    if (a>b and a>c){
        cout<<"a is greatest"<<endl;
    }
    else if (b>a and b>c){
        cout<<"b is greatest"<<endl;
    }
    else {
        cout<<"c is greatest"<<endl;
    }
    return 0;
}
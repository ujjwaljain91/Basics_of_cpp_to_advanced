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
    if ((a+b)>c and (b+c)>a and (c+a)>b){
        cout<<"sides of triangle "<<endl;
    } 
    else
        cout<<"Not the sides of triangle";
    
    return 0;
}
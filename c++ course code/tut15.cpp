#include <iostream>
using namespace std;
int sum(int a, int b){
    int c =a+b;
    return c;

}

int main(){
    int num1,num2;
    cout<<"Enter first value "<<endl;
    cin>>num1;
    cout<<"Enter second value "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    
    
    return 0;
}
#include <iostream>

using namespace std;
// *************************selection control structure if else if else or else if*************************
int main(){
    int age;
    cout<<"Welcome to Radisson party"<<endl;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    if((age<18) &&(age>0)){
        cout<<"You can not come to party "<<endl;

    }
    else if (age==18){
        cout<<"You are a kid and you will get a kid pass "<<endl;

    }
    else if (age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"you can come to party "<<endl;

    }

    return 0;


}
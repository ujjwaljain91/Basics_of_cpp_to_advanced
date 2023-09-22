// *******************************Selection control structure :: Switch statement *********************.
#include <iostream>
using namespace  std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;


    switch (age){
        case 18:
        cout<<"Your age is 18"<<endl;
        break;
    case 22:
    cout<<"Your age is 22"<<endl;
    break;

    case 2:
    cout<<"Your age is 2"<<endl;
    break;

    case 100:
    cout<<"Your are in adulthood "<<endl;
    break;


    default:
    cout<<"No special case available "<<endl;
         break;



    cout<<"Done with switch case";
    return 0;



    }
}
#include <iostream>
using namespace std;

int main(){
    //  int n;
    // cout << "Enter the number :";
    // cin >> n;
    // if (n>99 && n<1000){
    //     cout << "3 digit number" << endl;
    // }
    // else
    //     cout << "not a 3 digit number" << endl;

     int n;
    cout << "Enter the number :";
    cin >> n;
    if (n%5==0 && n%3==0 ){
        cout<<"divisible by 5 and 3 :"<<endl;
    }
    else{
        cout<<"Not divisible by 5 and 3"<<endl;
    }

    
    return 0;
}
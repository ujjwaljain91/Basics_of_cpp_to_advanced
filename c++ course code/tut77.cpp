#include <iostream>
using namespace std;

int main(){
    int cp;
    cout << "Enter cost price :";
    cin >> cp;
    int sp;
    cout << "Enter selling  price :";
    cin >> sp;
    if (sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"Loss  is "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
   

    return 0;
}
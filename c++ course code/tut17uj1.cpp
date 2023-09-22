#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;

}

float moneyrecieved(int currentmoney, float factor= 1.04){
    return currentmoney * factor;

}

int main(){
    int a , b;
    int money = 1000000;
    cout<<"If you have "<<money<<"Rs in your bank account, you will recieve "<<moneyrecieved(money)<<"Rs after 1 year"<<endl;
    cout<<"For vip:if you have "<<money<<"Rs in your bank account, you will recieve"<<moneyrecieved(money, 1.1)<<
    "rs after 1 year";
    return 0;

}

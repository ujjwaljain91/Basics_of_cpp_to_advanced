#include <iostream>
using namespace std;

int main(){
    int n,p=0, temp;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n>0){
        int rem= n%10;
        p=(p)+(rem*rem*rem);
        n=n/10;
    }
    if (temp==p){
        cout<<"Yes Armstrong number :";

    }
    else{
        cout<<"No It is not a Armstrong number :";
    }
    return 0;
}
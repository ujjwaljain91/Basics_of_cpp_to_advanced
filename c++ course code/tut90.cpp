#include <iostream>
using namespace std;
int sum(int n){
    if (n==1)
    return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<sum(n);
    return 0;
}

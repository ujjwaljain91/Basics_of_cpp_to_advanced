#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
       cout<<i*i<<" ";
    }
    cout<<endl;

    return 0;
}
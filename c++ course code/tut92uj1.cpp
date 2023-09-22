#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n =  ";
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
       if (i%2==0){
        arr[i]=i+10;
       }
       else {
        arr[i]=(i +1) * 2;
       }
    }
    cout<<"Modified array ";
    for (int  i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
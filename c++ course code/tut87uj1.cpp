#include <iostream>
using namespace std;

int main(){
      int n;
    cout << "Enter the value of :";
    cin >> n;
    if(n%2==0){
        cout<<"Enter the odd number :"<<endl;
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==j || j==n-i+1){
                cout<<"*";

        }
         else{
                cout<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}
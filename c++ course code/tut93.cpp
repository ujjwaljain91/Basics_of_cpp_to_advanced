#include <iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter the value of n =  ";
    cin>>n;
    int arr[n];
   int sumeven=0;
   int sumodd=0;
    for (int i = 1; i<=n; i++)
    {
       if (i%2==0){
        sumeven+=i;
         
       }
       else{
        sumodd+=i;
       }
    }
    cout<<sumeven-sumodd;
    cout<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool flag = true;
    for (int i = 2; i <=n/2; i++)
    {
      if(n%i==0){
        flag=false;
        break;
      }
    }
    if (n==1){
        cout<<"niether prime nor  composite";
    }
    else if (flag==true){
    cout<<"prime ";
    }
    else{
        cout<<"composite";
    }
    
    return 0;
}
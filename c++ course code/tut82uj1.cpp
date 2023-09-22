#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows :";
    cin>>m;
    int n;
    cout<<"Enter the number of column : ";
    cin>>n;
    for (int  i = 0; i <=m; i++)
    {
       for (int j = 0; j <=n; j++)
       {
        cout<<" *";
       }
       cout<<endl;
       
    }
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a[]={12,3,6,547,8,65,36,585};
    int n= sizeof(a)/4;
    int b[n];
    for (int i = 0; i<n; i++)
    {
        b[i]=a[n-1-i];
    }
    for (int i = 0; i<n; i++)
    {
       cout<<b[i]<<" ";
    }
    return 0;
}
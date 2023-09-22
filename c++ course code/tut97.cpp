#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][2]={{76,52},{12,54},{65,54},{98,32}};
    int mx= INT_MIN;
    for (int i = 0; i <4; i++)
    {
        for (int  j = 0; j <2; j++)
        {
            mx=max(mx,arr[i][j]);
        }
        
    }
    cout<<mx;
    
    return 0;
}
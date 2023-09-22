#include <iostream>
using namespace std;

int main(){
    int arr[4][2];
    arr[0][0]=76;
    arr[0][1]=81;
    arr[1][0]=13;
    arr[1][1]=76;
    arr[2][0]=82;
    arr[2][1]=91;
    arr[3][0]=88;
    arr[3][1]=90;
    for (int j = 0; j <2; j++)
    {
        for (int i = 0; i < 4; i++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
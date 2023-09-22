#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,2,3,4,5,6};
    int sum=1;
    for (int  i = 0; i <=5; i++)
    {
        sum*=arr[i];
    }
    cout<<sum;
    return 0;
}
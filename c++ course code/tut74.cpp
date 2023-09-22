#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// function objects (functor): function wrapped in a class so thatit available like an object
int main(){
    int arr[]= {1,7,4,2,54,16, 8};
    sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    // for (int i = 1; i< 100; i+=2)
    // {
    //     if (i%2!=0){
    //         if(i==9)
    //         continue;
    //         if (i==7)
    //         continue;
    //         cout<<i<<" ";
    //     }
    // }
    int x=4, y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
        else
        cout<<x<<" "<<y<<endl;
    }
    
    return 0;
}
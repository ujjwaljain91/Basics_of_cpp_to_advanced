#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    // int count =0;
    // while (n!=0){
    //     n=n/10;
    //     count++;
    // }
    int sum=0;
    while(n!=0){
        int ld=n%10;
        n/=10;
        sum+=ld;
    }
    cout<<sum;
   
    
  
    
    return 0;
}
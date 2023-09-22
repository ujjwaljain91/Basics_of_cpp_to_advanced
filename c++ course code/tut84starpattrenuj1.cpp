#include <iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter the number of column : ";
    cin>>n;
     for (int  i = 1; i <=n; i++){
        if(i%2==1){
    
       for (int j = 1; j <=i; j++)
    
        cout<<j<<" ";
       }
       else { // Even row
            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                cout << ch;
                ch++;
            }
        }
        cout << endl;
    }
   
   

       
       
    return 0;
}



#include <iostream>
using namespace std;
int main(){
      int a;
    cout<<"Enter your percentage  "<<endl;
    cin>>a;
    if (a>=81 and a<=100){
        cout<<"very good "<<endl;
    }
    else if (a>=61 and a<=80){
        cout<<"good "<<endl;
    }
    else if (a>=41 and a<=60){
        cout<<"average "<<endl;
    }
    else {
        cout<<"fail"<<endl;
    }
   
    return 0;
}
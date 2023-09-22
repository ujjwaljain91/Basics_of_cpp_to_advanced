#include <iostream>
using namespace std;

int main(){
    char ch;
    for (int ch=65; ch<=90; ch++){
        cout<<"ASCII character is :"<<char(ch)<<endl;
        cout<<"ASCII value is : "<<int(ch) <<endl;
    }    
    return 0;
}
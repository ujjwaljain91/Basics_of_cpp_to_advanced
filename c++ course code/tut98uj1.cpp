#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string :";
    getline(cin,s);
    cout<<s<<endl;
    cout<<"modified string ";
    s[0]='R';
    s[1]='U';
    cout<<s;
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
      
    // declaring an object of the type ifstream 
    ifstream in;
    // declaring string variable st 
    string st;
    // opening the text file into to inn
    in.open("sample60.txt");
    // giving ouput of the string lines by storing in st until the file reaches th eend of it 
    while (in.eof()==0);
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}
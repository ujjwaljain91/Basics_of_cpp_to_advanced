#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // connecting our file with hout stream
    ofstream hout("sample60b.txt");
    // creating a name string variable and filling it with string enterd by the user
    string name;
    cout<<"enter your name :";
    cin>>name;
    // writing a string to the file 
    hout<<name + "is my name ";
    // disconectimg our file 
    hout.close();
    // connecting our file with hin stream 
    ifstream ujj("sample60.txt");
    // creating a content string variable and filling it with string present there in the text file 
    string content;
    ujj>>content;
    cout<<"the content of the file is :"<<content;
    // disconnecting our file 
    ujj.close();
    return 0;
}
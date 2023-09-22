#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // declaring an object of the type ofstream
    ofstream out;
    // connecting the object out tothe text file using the member funvtion oprn()
    out.open("sample60.txt");
    // writing to the file 
    out<<"This is me \n";
    out<<"This is also me";
    // closing the file 
    out.close();
 [[]]   return 0;
}
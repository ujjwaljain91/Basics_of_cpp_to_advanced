#include <iostream>
using namespace std;
 typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;

} ep;

int main(){
    ep ujjwal;
    ep shubham;
    ep harry;
    ujjwal.eid= 1;
    ujjwal.salary= 150000000000;
    ujjwal.favchar = 'b';
    cout<<"first employee MR Ujjwal jain"<<endl;
    cout<<"The value is "<<ujjwal.eid<<endl;
    cout<<"The value is "<<ujjwal.favchar<<endl;
    cout<<"The value is "<<ujjwal.salary<<endl;


    cout<<"second employee  MR Harry Bhai"<<endl;
    harry.eid= 2;
    harry.salary= 12000000;
    harry.favchar='v';
    cout<<"The value is"<<harry.eid<<endl;
    cout<<"The value is"<<harry.salary<<endl;
    cout<<"The value is"<<harry.favchar<<endl;


    
    return 0;
}
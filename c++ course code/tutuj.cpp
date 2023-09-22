#include <iostream>
using namespace std;

int main(){
// ****************Long double, float literals **************
float d=34.4f;
long double e =34.4l;

cout<<"The value of d is"<<d<<endl<<"The value of e is "<<e<<endl;
cout<<"The value of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"The value of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The value of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"The value of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"The value of 34.4L is "<<sizeof(34.4L)<<endl; 
// l:: implies long double 
// f implies float



return 0;
}



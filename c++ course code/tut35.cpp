#include <iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor  is called for object number"<<count<<endl;
        count--;
    }
};

int main(){
  cout<<"we are inside are main function "<<endl;
  cout<<"creating first object n1"<<endl;
  num n1;
  {
    cout<<"Entering this block"<<endl;
    cout<<"Creating two more objects "<<endl;
    num n2,n3;
    cout<<"Exiting this block"<<endl;
  }  
  cout<<"Back to main "<<endl;
    return 0;
}
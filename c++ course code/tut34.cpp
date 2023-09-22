#include <iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    // when no copy constructor is found , complier supplies its own copy constructor  
    number(number &obj){
        cout<<"copy constructor called!!!!"<<endl;
        a= obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};


int main(){
    number x,y , z(45),z2;
    x.display();
    y.display();
    z.display();
    // copy constructor invoked
    number z1(z);
    z1.display();
// copy constructor not called
    z2=z;
    z2.display();
// copy constructor invoked
    number z3= z;
    z3.display();
    // z1 should exactly resemble z or x or y
    
    return 0;
}
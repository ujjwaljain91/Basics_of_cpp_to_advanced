#include <iostream>
using namespace std;
class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D:public B{
    int a;
    public:
    void say(){
        cout<<"hello my beautiful people"<<endl;
    }
};

int main(){
    B b;
    b.say();

    
    D d;
    d.say();
    return 0;
}
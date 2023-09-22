#include <iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    test(int i, int j): a(i),b(j){
        cout<<"construtor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;

    }
};

int main(){
    test t(4,6);
    return 0;
}
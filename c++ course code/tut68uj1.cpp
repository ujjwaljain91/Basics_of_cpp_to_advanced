#include <iostream>
using namespace std;
void func(int a){
    cout<<"I am first func() = "<<a<<endl;
}
template<class t>
void func(t a){
    cout<<"I am templatised func()"<<a<<endl;
}
int main(){
    // exact match take the highest priority
    func(4); 
    return 0;
}
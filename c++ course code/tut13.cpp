#include <iostream>
using namespace std;

int main(){
    // Array example 
    int marks[] = {23,45,56,89, 99};

    int mathsmarks[4];
    mathsmarks[0]= 2273;
    mathsmarks[1]= 5273;
    mathsmarks[2]= 73;
    mathsmarks[3]= 578;

    cout<<"These are maths marks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    
    // you can change the value of an array
    marks[2] = 455;
    cout<<"These are marks "<<endl;
    cout<<"marks[0]"<<endl;
    cout<<"marks[1]"<<endl;
    cout<<"marks[2]"<<endl;
    cout<<"marks[3]"<<endl;

    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;  
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    

    



    return 0;
}
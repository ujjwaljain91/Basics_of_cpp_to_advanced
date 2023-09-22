#include<iostream>
// there are two types of headers file :
// 1 system headers files: it comes with the compilers 
// 2 user headers file: it is written by the programmers 
//#include "this.h" this will produce an error if this.h is no present in the current directory 

using namespace std;

int main(){
    int a= 4, b= 5;
    cout<<"operators in c++:"<<endl;
    cout<<"following are the types of Arithematic operators in c++"<<endl;
    //Arithematic operators 
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a <<endl;
    cout<<endl;
    // ++a means first add then print
    // --a means first decreases then print 
    // a++ means first print then increase 
    // a-- means first print then decrease 

    //Assignment operators  is used to assign values to varibales 
    // int a=3, b =9
    // char d="d"
    // comparison operators
    cout<<"Following are the types of comparison operator in c++"<<endl;
    cout<<"The value of a==b is"<<(a==b)<<endl;
    cout<<"The value of a!=b is"<<(a!=b)<<endl;
    cout<<"The value of a>=b is"<<(a>=b)<<endl;
    cout<<"The value of a<=b is"<<(a<=b)<<endl;
    cout<<"The value of a>b is"<<(a>b)<<endl;
    cout<<"The value of a<b is"<<(a<b)<<endl;
    

    // Logical operators 
    cout<<"Following are the types of logical operators in c++"<<endl;
    cout<<"The value of  this logical and operators (a==b) && (a<b)) is:"<<((a==b) &&(a<b))<<endl;
      cout<<"The value of  logical or  operators (a==b) && (a<b)) is:"<<((a==b)|| (a<b))<<endl;
      cout<<"the value of  logical not operators (!(a==b) is:"<<(!(a==b))<<endl;
    return 0 ;
}    



   

    
    
    

    






    


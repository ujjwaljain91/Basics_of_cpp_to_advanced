#include <iostream>
#include <map>
#include <string>
using namespace std;
// Map is an associative array 
int main(){
    map<string , int> marksmap;
    marksmap["atul"] = 99;
    marksmap["rohan"] = 85;
    marksmap["rohini"] = 55;
    marksmap["sachin"] =65;
    marksmap["mohit"] =67;

    marksmap.insert({{"rohit", 89}, {"arun", 65}});
    map<string , int>:: iterator iter;
    for(iter= marksmap.begin(); iter!=marksmap.end() ; iter++){
        cout<<(*iter).first<<"  "<<(*iter).second<<"\n";

    }
    cout<<"The max size is :"<<marksmap.max_size()<<endl;
    cout<<"The size is :"<<marksmap.size()<<endl;
    cout<<"The empty's return value  is :"<<marksmap.empty()<<endl;


    return 0;
}
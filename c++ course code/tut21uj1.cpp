#include <iostream>
#include<iomanip>
using namespace std;


class Animals
{
    private:
    int legs , sound, eyes;
    public:
    int ears;


void setdata(int legs1, int sound1, int eyes1);
void getdata(){
    cout<<"ANIMALS KINGDOM"<<endl;
    cout<<"legs of animal are ="<<legs<<endl;
    cout<<"sound of animal are = "<<sound<<endl;
    cout<<"eyes  of animal are ="<<eyes<<endl;
    cout<<"ears  of animal are ="<<ears<<endl;
}

};

void Animals :: setdata(int legs1,int sound1,int eyes1){
    legs= legs1;
    sound= sound1;
    eyes = eyes1;

}

int main(){
    cout<<" 1. Tiger "<<endl;
    Animals tiger;
    tiger.ears = 2;
    tiger.setdata(2,1,2);
    tiger.getdata();

    cout<<"2. Lion "<<endl;
    Animals Lion;
    Lion.ears = 2;
    Lion.setdata(2,1,2);
    Lion.getdata();
    
    return 0;
}

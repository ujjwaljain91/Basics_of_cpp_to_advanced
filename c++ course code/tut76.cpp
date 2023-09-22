#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number :";
    // cin >> n;
    // if (n % 2 == 0)
    //     cout << "even number" << endl;
    // else
    //     cout << "odd number" << endl;

    int n;
    cout<<"Enter the number :";
    cin>>n;
    if ((n>=0)){
        cout<<"Answer is"<<n<<endl; 
    }
    else{
        cout<<"Answer is :"<<-n<<endl;
    }
    return 0;
}
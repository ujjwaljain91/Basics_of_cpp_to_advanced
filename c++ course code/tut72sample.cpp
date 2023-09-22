#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void display1(list<int> &lst1)
{
    list<int>::iterator iter;
    for (iter = lst1.begin(); iter != lst1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(3);
    display(list1);

    list<int> list2;
    list2.push_back(45);
    list2.push_back(34);
    list2.push_back(45);
    display1(list2);
    return 0;
}
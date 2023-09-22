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

int main()
{
    list<int> list1;
    // list<int> list2(7);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(3);
    display(list1);
    // sorting the list
    // list1.sort();
    // removing element from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(6);
    // display(list1);
    // reversing the list
    list1.reverse();
    display(list1);

    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 34;
    iter++;
    *iter = 45;
    iter++;
    display(list2);
    list1.merge(list2);
    list1.sort();
    list2.sort();
    cout << "list 1 after merging in list 2:";
    display(list1);
    return 0;
}
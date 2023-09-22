#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2);
    vector<int> vec4(4, 13);
    display(vec4);
    cout<<vec4.size();
    return 0;
}
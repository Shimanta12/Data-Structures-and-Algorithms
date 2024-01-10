#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    v.push_back(4);
    v.push_back(5);
    v.insert(4, 100);
    v.erase(2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    // linear search using find(starting iterator(included), ending iterator(excluded), key)

    int key;
    cin >> key;

    vector<int>::iterator it;
    it = find(arr.begin(), arr.end(), key);
    if (it != arr.end())
    {
        cout << "Key found at " << it - arr.begin() << "th index" << endl;
    }
    else
    {
        cout << "NOT Found!" << endl;
    }
}
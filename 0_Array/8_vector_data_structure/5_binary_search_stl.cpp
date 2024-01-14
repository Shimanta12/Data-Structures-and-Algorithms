#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 6, 3, 21, 54, 7, 23};
    sort(arr.begin(), arr.end());

    int key;
    cin >> key;

    if (binary_search(arr.begin(), arr.end(), key))
    {
        cout << key << " found in the array." << endl;
    }
    else
    {
        cout << "NOT found!" << endl;
    }

    return 0;
}
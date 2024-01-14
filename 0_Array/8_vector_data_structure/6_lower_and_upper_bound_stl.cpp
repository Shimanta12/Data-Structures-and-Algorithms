#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 30};
    sort(arr.begin(), arr.end());

    for (int e : arr)
        cout << e << " ";
    cout << endl;

    vector<int>::iterator low, up;
    low = lower_bound(arr.begin(), arr.end(), 30); // O(log n)
    up = upper_bound(arr.begin(), arr.end(), 30);  // O(log n)
    if (low - arr.begin() == arr.size())
    {
        cout << "Element NOT Found!" << endl;
    }
    else
    {
        cout << "Lower bound at position " << low - arr.begin() << endl;    // 2
        cout << "Upper bound at position " << up - arr.begin() - 1 << endl; // upper_bound returns the iterator to the next element after last occurence of the searched value. That is why we are substracting 1 to get the actual index;
    }

    return 0;
}
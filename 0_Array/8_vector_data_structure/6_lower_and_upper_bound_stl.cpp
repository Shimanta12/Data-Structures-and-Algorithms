#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 6};
    sort(arr.begin(), arr.end());

    for (int e : arr)
        cout << e << " ";
    cout << endl;
    int key;
    cin >> key;
    vector<int>::iterator low, up;
    low = lower_bound(arr.begin(), arr.end(), key); // returns an iterator pointing to the first element in the range which is not less than the specified value
    up = upper_bound(arr.begin(), arr.end(), key);  // returns an iterator pointing to the first element in the range [arr.begin(), arr.end()) which is greater than the specified value
    if (low - arr.begin() == arr.size() || *low != key)
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
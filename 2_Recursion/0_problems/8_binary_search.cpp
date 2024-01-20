#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> &arr, int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        return binary_search(arr, mid + 1, high, key);
    }
    else
    {
        return binary_search(arr, low, mid - 1, key);
    }
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 34, 7, 8, 9, 97, 234, 56, 76};
    sort(arr.begin(), arr.end());

    int key;
    cin >> key;

    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;

    int res = binary_search(arr, 0, arr.size() - 1, key);
    if (res != -1)
    {
        cout << "The key is at index " << res << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Time and space complexity -- O(n)
bool is_sorted(vector<int> &arr, int i, int size)
{
    if (i == size - 1)
        return true;
    return arr[i] < arr[i + 1] && is_sorted(arr, i + 1, size);
}

int main()
{
    vector<int> arr = {1, 2, 13, 4, 5};
    int size = arr.size();
    cout << is_sorted(arr, 0, size);
    return 0;
}
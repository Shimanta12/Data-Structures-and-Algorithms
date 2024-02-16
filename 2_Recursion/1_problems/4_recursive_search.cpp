#include <iostream>
#include <vector>
using namespace std;

int first_occ(vector<int> &arr, int i, int key)
{
    // base case
    if (i == arr.size())
        return -1;

    if (arr[i] == key)
    {
        return 0;
    }
    int res = first_occ(arr, i + 1, key);
    if (res == -1)
        return -1;
    else
        return res + 1;
}
// 1, 2, 3, 4, 5, 6

int last_occ(vector<int> &arr, int i, int key)
{
    if (i == arr.size())
    {
        return -1;
    }
    int res = last_occ(arr, i + 1, key);
    if (res == -1)
    {
        if (arr[i] == key)
            return 0;
        else
            return -1;
    }
    else
        return res + 1;
}

int main()
{
    vector<int> arr = {2, 3, 1, 4, 3, 10};
    int size = arr.size();
    int key;
    cin >> key;
    cout << first_occ(arr, 0, key) << endl;
    cout << last_occ(arr, 0, key);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Counting sort. Time complexity -> O(range + n)
// Prequisites:array needs to be consist of positive number only.

void counting_sort(vector<int> &arr)
{
    int largest = -1;
    for (auto e : arr)
    {
        largest = max(largest, e);
    }
    vector<int> freq_arr(largest + 1, 0);
    for (auto e : arr)
    {
        freq_arr[e]++;
    }
    int j = 0;
    for (int i = 0; i < freq_arr.size(); i++)
    {
        while (freq_arr[i] > 0)
        {
            arr[j] = i;
            freq_arr[i]--;
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {10, 6, 5, 7, 2, 3, 4, 1, 8, 5, 0, 8, 9};
    counting_sort(arr);
    for (auto e : arr)
        cout << e << " ";
    cout << endl;
    return 0;
}
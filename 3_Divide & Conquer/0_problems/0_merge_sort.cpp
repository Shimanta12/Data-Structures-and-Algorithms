#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;

    vector<int> temp;
    while (i <= mid and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
}

// Time complexity -- O(n * log n)
void merge_sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int s = 0;
    int e = arr.size() - 1;
    merge_sort(arr, s, e);
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
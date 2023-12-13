#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int m, min_index;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        m = arr[i];
        min_index = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < m)
            {
                m = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 4};
    selection_sort(arr);
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
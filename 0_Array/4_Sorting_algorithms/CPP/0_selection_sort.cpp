#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int min_index;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    selection_sort(arr);
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
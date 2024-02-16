#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    bool swapped;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << i << endl;
        swapped = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    bubble_sort(arr);
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
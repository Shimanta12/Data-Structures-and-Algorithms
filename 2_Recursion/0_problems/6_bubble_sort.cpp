#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr, int n, int j)
{

    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        bubble_sort(arr, n - 1, 0);
        return;
    }
    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    bubble_sort(arr, n, j + 1);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int size = arr.size();

    bubble_sort(arr, size, 0);

    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
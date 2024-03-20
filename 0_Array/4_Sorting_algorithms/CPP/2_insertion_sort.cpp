#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    int current, j;
    for (int i = 1; i < arr.size(); i++)
    {
        current = arr[i];
        // finding the right index for the current element in the sorted part.
        int j = i - 1;
        while (j >= 0 and arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    insertion_sort(arr);
    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
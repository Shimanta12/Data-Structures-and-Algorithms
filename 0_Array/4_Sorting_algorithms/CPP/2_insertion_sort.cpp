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
        for (j = i; j > 0; j--)
        {
            if (current < arr[j - 1])
                arr[j] = arr[j - 1];
            else
                break;
        }
        arr[j] = current;
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
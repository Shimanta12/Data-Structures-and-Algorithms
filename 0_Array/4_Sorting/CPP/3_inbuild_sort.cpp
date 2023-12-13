#include <iostream>
#include <algorithm>
using namespace std;

// sort() --> Time complexity O(nLogn). Takes two iterator as arguments and an optional compare function.
// In solving bigger problems we will use the builtin sort function. In some cases counting sort might be a better choice.

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    /*   Sorting in decreasing order*/
    // Way 1 -> after sorting reverse the array.
    // sort(arr, arr + n);
    // reverse(arr, arr + n);
    // Way 2 -> pass compare function of your own.
    // sort(arr, arr + n, compare);
    // Way 3 -> pass the builtin compare function
    // sort(arr, arr + n, greater<int>());

    return 0;
}
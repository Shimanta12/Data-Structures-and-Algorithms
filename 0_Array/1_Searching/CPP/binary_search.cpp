#include <iostream>
using namespace std;

// Fast and efficient
// Search space is monotonic(non increasing or non decreasing)

int binary_search(int *arr, int n, int key)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {11, 12, 54, 56, 87, 98};

    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index = binary_search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
        cout << key << " NOT found!" << endl;
    return 0;
}
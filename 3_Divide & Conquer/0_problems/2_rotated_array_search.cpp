#include <iostream>
#include <vector>
using namespace std;

#define endl "\n"

/*
Rotated Search

Write a function that takes input an sorted array of distinct integers, which is rotated about a pivot point and finds the index of any given element.
 */
int rotated_search(vector<int> arr, int key)
{
    int size = arr.size();
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[s] <= arr[mid])
        {
            if (key >= arr[s] and key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (key >= arr[mid] and key <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4};
    int key;
    cin >> key;
    int idx = rotated_search(arr, key);
    if (idx != -1)
    {
        cout << "Key found at index " << idx << endl;
    }
    else
    {
        cout << "Key NOT Found!" << endl;
    }
    return 0;
}

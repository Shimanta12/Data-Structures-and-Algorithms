#include <iostream>
using namespace std;

// Subarray is smaller contiguous part of the array.

void print_subarrays(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "[";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                if (k != j)
                    cout << ", ";
            }
            cout << "]" << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    print_subarrays(arr, n);
    return 0;
}
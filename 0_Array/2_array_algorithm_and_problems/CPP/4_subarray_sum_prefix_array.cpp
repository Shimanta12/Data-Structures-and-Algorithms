#include <iostream>
using namespace std;

// Prefix sum Approach. Time complexity --> O(n^2)

int largest_subarray_sum(int *arr, int n)
{
    int prefix_sum_arr[n] = {arr[0]}; // Stores the cummualive sum of the array.
    for (int i = 1; i < n; i++)
    {
        prefix_sum_arr[i] = prefix_sum_arr[i - 1] + arr[i];
    }
    int max_sum = 0, sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i != 0)
                sum = prefix_sum_arr[j] - prefix_sum_arr[i - 1];
            else
                sum = prefix_sum_arr[j];
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int main()
{
    int arr[] = {4, 2, -2, 1, -8, 7, -1, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << largest_subarray_sum(arr, n) << endl;
    return 0;
}
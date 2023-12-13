#include <iostream>
using namespace std;

// Kadane's Algorithm. Time complexity --> O(n)
int largest_subarray_sum(int *arr, int n)
{
    int curr_sum = 0, max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (curr_sum < 0)
            curr_sum = 0;
        max_sum = max(max_sum, curr_sum);
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
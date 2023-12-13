#include <iostream>
using namespace std;

// Brute force approach. Time complexity --> O(n^3)

int largest_subarray_sum(int *arr, int n)
{
    int max_sum = 0, sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum > max_sum)
                max_sum = sum;
        }
    }
    return max_sum;
}

int main()
{
    int arr[] = {4, 2, -2, 1, -8, 7, -1, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << largest_subarray_sum(arr, n);
    return 0;
}
#include <iostream>
using namespace std;

void print_all_pairs(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")"
                 << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    print_all_pairs(arr, n);
    return 0;
}
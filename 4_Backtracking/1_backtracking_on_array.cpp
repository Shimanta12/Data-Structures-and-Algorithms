#include <iostream>
#include <vector>
using namespace std;

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill_array(int *arr, int n, int i, int val)
{
    if (i == n)
    {
        print_array(arr, n);
        return;
    }

    arr[i] = val;
    fill_array(arr, n, i + 1, val + 1);
    // Backtracking step
    arr[i] = arr[i] * -1;
}

int main()
{
    int arr[100] = {0};
    int n;
    cin >> n;
    fill_array(arr, n, 0, 1);
    print_array(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

void array_reverse(int *arr, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    array_reverse(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

void print_array(int *arr, int n) // arr is a pointer here. Not an array.
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 3, 4};
    int n = sizeof(arr) / sizeof(int);

    print_array(arr, n);
    return 0;
}
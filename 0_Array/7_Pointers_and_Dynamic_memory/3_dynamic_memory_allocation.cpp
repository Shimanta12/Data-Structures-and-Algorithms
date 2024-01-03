#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; // Creating a dynamic array on the heap.
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr; // Always remember to free up the allocated memory on the heap, otherwise it will cause memory leak.

    /*
    Stack memory gets deallocated when the function finishes executing. But heap doesnt. We have to deallocated the allocated memory in the heap manually by using delete statement.
    All kinds of memory gets deleted after the program has executed.
     */
    return 0;
}
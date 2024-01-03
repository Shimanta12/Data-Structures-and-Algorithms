#include <iostream>
#include <vector>
using namespace std;

// Points to note
/*
1. Vectors can be used to create dynamic 1D & 2D arrays.
2. Vector's size is doubled if needed extra space.
2. Unlike array vectors are passed by value to a function, but we still can pass them by reference if need arises.

 */
int main()
{
    // vector initialization
    vector<int> arr = {1, 2, 4, 5, 6};

    // capacity of the vector
    cout << "Capacity " << arr.capacity() << endl;

    // fill constructor
    vector<int> visited(100, 0);

    // add element at the end. Time complexity --> O(1)
    arr.push_back(100);
    cout << "Capacity " << arr.capacity() << endl;

    // remove element from the end.
    arr.pop_back();

    // vector size using size() method
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
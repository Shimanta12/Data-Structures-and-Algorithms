#include <iostream>
#include <vector>
using namespace std;

/*
All the identifiers in a program get stored in the symbol table(Read only table) along with their addresses.
 */

int main()
{
    // vector declaration and initialization
    vector<int> arr = {1, 2, 3, 4, 5};

    // vector initialization using fill constructor
    vector<int> visited(100, -1);

    // push_back O(1)
    arr.push_back(6);

    // size() --> returns the number of elements in the vector
    cout << arr.size() << endl;

    // capacity() -> returns the number of allocated contiguous memory. vector double up it's capacity upon reaching it's capacity.
    cout << arr.capacity() << endl;

    // printing the values of vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int e : visited)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
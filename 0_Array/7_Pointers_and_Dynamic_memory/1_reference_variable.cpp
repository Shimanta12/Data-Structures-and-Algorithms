#include <iostream>
using namespace std;

int main()
{
    // Reference variable (&). It basically creates an alias for the same object or variable.
    // In this case x is y, and y is x. Changes to any of em will effect the other.
    int x = 10;
    int &y = x; // Need to be intialized when declared.

    cout << &x << " " << &y << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *xp = &x; // A pointer variable that stores the address of another variable(which we are getting using address of operator '&'.
    cout << xp << endl;

    cout << &xp << endl;

    // Pointer of a pointer
    int **xpp = &xp;
    cout << xpp << endl;

    // Dereference operator
    cout << *xp << endl;
    cout << **xpp << endl;

    // NULL pointer. Can be set using 0 or NULL. This pointer basically points to nothing. If we try to dereference a null pointer we'll get segmentation error(Memory related error).
    int *np = NULL;
    return 0;
}
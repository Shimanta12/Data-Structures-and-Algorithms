#include <iostream>
using namespace std;

/*
You are given a number. You have to show whether the number is a power of two or not.


Sample input 1: 128
Sample output 1: Power of two.


Sample input 2: 13
Sample output 2: Not a power of two.


 */

int main()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << "Power of two." << endl;
    }
    else
    {
        cout << "Not a power of two." << endl;
    }
    return 0;
}
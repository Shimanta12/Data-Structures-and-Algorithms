#include <iostream>
using namespace std;

#define endl "\n"

/*
Binary String

Count the number of binary strings with no consecutive ones that can be formed using a binary string of length N.

 */

int no_of_string(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;
    return no_of_string(n - 1) + no_of_string(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << no_of_string(n) << endl;
    return 0;
}
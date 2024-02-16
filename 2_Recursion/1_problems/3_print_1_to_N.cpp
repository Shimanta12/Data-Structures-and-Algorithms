#include <iostream>
using namespace std;

void increasing_order(int n)
{
    if (n < 1)
    {
        return;
    }
    increasing_order(n - 1);
    cout << n << " "; // anything thats written after the function call is executed while coming from the base case i.e. bottom(base case) to the top.
}

void decreasing_order(int n)
{
    if (n < 1)
    {
        cout << endl;
        return;
    }
    cout << n << " "; // anything thats written before the function call is executed while going towards the base case i.e from the top to the bottom(base case).
    decreasing_order(n - 1);
}

/*
NOTE: When we are coming from a smaller subproblem toward the bigger problem, that code is written after the function call.
 */

int main()
{
    int n;
    cin >> n;
    decreasing_order(n);
    increasing_order(n);
    return 0;
}
#include <iostream>
using namespace std;

#define ll long long
#define endl "\n"

/*
Recursion = Principle of Mathematical induction

1. Figure out the smallest case
2. Always assume the subproblem can be solved.
3. Solve the current problem assuming subproblem solution exists.

 */

// All recursive problem will take up extra space because of implicit stack.

/*
Time complexity -- O(n) [n number of function calls, each function call are done at a constant time]
Space complexity -- O(n)
 */
ll factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
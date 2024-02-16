#include <iostream>
using namespace std;

#define ll long long
#define endl "\n"
/*
Time complexity -- O(n) [n number of function calls, each function call are done at a constant time]
Space complexity -- O(n) [maximum space utilization for the call stack]
 */
ll factorial(int n)
{
    if (n == 0)
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
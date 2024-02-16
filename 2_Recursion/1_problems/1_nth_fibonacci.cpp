#include <iostream>
using namespace std;

// Time complexity -- O(2^n)
// Space complexity -- O(n) [Maximum utilization of the memory for the call stack]
int fibo(int n)
{
    if (n == 1 or n == 2)
        return n - 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}
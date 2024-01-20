#include <iostream>
using namespace std;

// Time complexity -- O(2^n)
// Maximum utilization of the memory in other words space complexity -- O(n)
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
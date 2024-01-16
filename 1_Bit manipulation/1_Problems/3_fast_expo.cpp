#include <iostream>
using namespace std;

#define endl "\n"

int fast_expo(int n, int m) // returns the value of n^m
{
    int ans = 1, last_bit;
    while (m > 0)
    {
        last_bit = (m & 1);
        if (last_bit == 1)
        {
            ans *= n;
        }
        m = m >> 1;
        n = n * n;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << fast_expo(n, m) << endl;
    return 0;
}
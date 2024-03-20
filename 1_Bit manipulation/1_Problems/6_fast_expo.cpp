#include <iostream>
using namespace std;

#define endl "\n"

int fast_expo(int a, int n) // returns the value of a^m. Time complexity O(log n)
{
    int ans = 1, last_bit;
    while (n > 0)
    {
        last_bit = (n & 1);
        if (last_bit == 1)
        {
            ans *= a;
        }
        n = n >> 1;
        a = a * a;
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
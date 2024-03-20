#include <iostream>
using namespace std;

int integer_to_binary(int n)
{
    int ans = 0, last_bit, pow = 1;
    while (n > 0)
    {
        last_bit = n & 1;
        if (last_bit)
        {
            ans += pow;
        }
        n = n >> 1;
        pow *= 10;
    }
    return ans;
}

int binary_to_integer(int n)
{
    int ans = 0, digit, p = 1;
    while (n > 0)
    {
        digit = n % 10;
        if (digit)
        {
            ans += p;
        }
        n /= 10;
        p *= 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << integer_to_binary(n) << endl;
    int m;
    cin >> m;
    cout << binary_to_integer(m) << endl;
}
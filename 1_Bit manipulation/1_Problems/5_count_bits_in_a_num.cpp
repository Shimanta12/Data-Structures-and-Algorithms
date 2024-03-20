#include <iostream>
using namespace std;

#define endl "\n"

int count_bits(int n) // Time complexity - O(log n)
{
    int count = 0, last_digit;
    while (n > 0)
    {
        last_digit = n & 1;
        count += last_digit;
        n = n >> 1;
    }
    return count;
}

int count_bits_optmzd(int n) // faster than the previous method
{
    int count = 0;
    while (n > 0) // will iterate as the same as number of set bits.
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << count_bits(n) << endl;
    cout << count_bits_optmzd(n) << endl;
    return 0;
}
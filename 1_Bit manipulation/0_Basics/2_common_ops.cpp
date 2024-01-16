#include <iostream>
using namespace std;

#define endl "\n"

int get_ith_bit(int n, int i)
{
    int mask = 1 << i;
    return (n & mask) > 0 ? 1 : 0;
}

void set_ith_bit(int &n, int i)
{
    int mask = 1 << i;
    n = n | mask;
}

void clear_ith_bit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}

void update_ith_bit(int &n, int i, int b)
{
    clear_ith_bit(n, i);
    int mask = b << i;
    n = n | mask;
}

void clear_last_i_bits(int &n, int i)
{
    int mask = (~0) << i;
    n = n & mask;
}

void clear_bits_in_range(int &n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

int main()
{
    int n, i, j;
    cin >> n >> i >> j;
    // cout << get_ith_bit(n, i) << endl;
    // set_ith_bit(n, i);
    // clear_ith_bit(n, i);
    // update_ith_bit(n, i, 0);
    // clear_last_i_bits(n, i);
    clear_bits_in_range(n, i, j);
    cout << n << endl;
    return 0;
}
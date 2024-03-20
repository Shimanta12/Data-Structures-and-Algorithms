#include <iostream>
using namespace std;

#define endl "\n"

/*
Replace Bits in N by M.
You are given two 32-bit numbers, N and M, and two bit positions i and j. Write a method to set all bits between i and j in N equal to M. M (becomes a substring of N locationed at and starting at j)

Sample Input:
N = 10001
M = 111
i = 1
j = 3

Sample Output: 11111


 */

void clear_bits_in_range(int &n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

void solve(int &n, int m, int i, int j)
{
    clear_bits_in_range(n, i, j);
    int mask = m << i;
    n = n | mask;
}

int main()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    solve(n, m, i, j);
    cout << n << endl;
    return 0;
}

/*
10001 = 17
111 = 7
i = 1
j = 3
10001 = 17
 */
#include <iostream>
using namespace std;

#define endl '\n'

/*
Grid ways
Given a MxN grid, find the number of ways to reach the bottom right corner(n-1) starting from top left. At each cell you can move right or down.

Sample input: 3 3
Sample output: 6
 */

// Times complexity 2^(n+m)
int grid_ways(int i, int j, int n, int m)
{
    if (i == n - 1 and j == m - 1)
    {
        return 1;
    }
    if (i >= n or j >= m)
    {
        return 0;
    }
    int ans = grid_ways(i + 1, j, n, m) + grid_ways(i, j + 1, n, m);
    return ans;
}

/*
Grid ways using mathematical formula
if we have n rows, then we can go down to the bottom of the grid using n-1[n-1's D] move. And if we have m columns, then we can go right until the boundary of the grid using m-1[m-1's D] moves. So the path is nothing but the permutation of (n-1 + m-1) discarding the duplicates. So the formula would be ways = ((n-1 + m-1)!) / ((n-1)! * (m-1)!)
 */

int main()
{
    int n, m;
    cin >> n >> m;
    cout << grid_ways(0, 0, n, m);
    return 0;
}
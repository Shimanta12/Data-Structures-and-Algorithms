#include <iostream>
#include <vector>
using namespace std;

/*
Grid ways
Given a MxN grid, find the number of ways to reach the bottom right corner(n-1) starting from top left. At each cell you can move right or down. Some cells might be blocked.

Sample input(Here 1 means the cell is blocked):
n=4, m=5
0 1 1 1 1
0 0 0 0 0
0 1 1 0 0
0 0 0 0 0

Sample Output: 4

 */

bool valid_cell(int i, int j, vector<vector<int>> &maze)
{
    if (maze[i][j] == 1)
    {
        return false;
    }
    return true;
}

int grid_ways(vector<vector<int>> &maze, int i, int j, int n, int m)
{
    if (i == n - 1 and j == m - 1)
    {
        return 1;
    }
    int ways = 0;
    if (j + 1 < m and valid_cell(i, j + 1, maze))
    {
        ways += grid_ways(maze, i, j + 1, n, m);
    }
    if (i + 1 < n and valid_cell(i + 1, j, maze))
    {
        ways += grid_ways(maze, i + 1, j, n, m);
    }
    return ways;
}

int main()
{
    int n, m, c;
    cin >> n >> m;
    vector<vector<int>> maze(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
        }
    }
    cout << grid_ways(maze, 0, 0, n, m) << endl;
    return 0;
}

/*
4 5
0 1 1 1 1
0 0 0 0 0
0 1 1 0 0
0 0 0 0 0


 */
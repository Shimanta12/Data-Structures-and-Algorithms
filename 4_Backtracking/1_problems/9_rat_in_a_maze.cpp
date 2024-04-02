#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell


Sample Input:
4
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1

Sample Output:
DDRDRR DRDDRR
 */
vector<vector<int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
string dir = "UDLR";

void solve(vector<vector<int>> &m, int i, int j, int n, vector<string> &paths, string path)
{
    if (i == n - 1 and j == n - 1)
    {
        paths.push_back(path);
        return;
    }

    for (int idx = 0; idx < 4; idx++)
    {
        int x = i + d[idx][0];
        int y = j + d[idx][1];
        if (x >= 0 and x < n and y >= 0 and y < n and m[x][y] == 1)
        {
            m[x][y] = 0;
            solve(m, x, y, n, paths, path + dir[idx]);
            m[x][y] = 1;
        }
    }
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> paths;
    if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
    {
        return paths;
    }
    else
    {
        m[0][0] = 0;
        solve(m, 0, 0, n, paths, "");
        return paths;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    vector<string> result = findPath(m, n);
    if (result.size() == 0)
    {
        cout << -1;
    }
    else
    {
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

/*
Problem: Rahul's father has left a farm organized as an N X N grid. Each square in the grid either has or does not have a mango tree. He has to divide the farm with his three sisters as follows: he will draw one horizontal line and one vertical line to divide the field into four rectangles. His sisters will choose three of the four smaller fields and he gets the last one.

Output: Max no of trees he can get.

 */

int max_no_of_mango_trees(char grid[][100], int n, int m)
{
    int prefix_sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '#')
                prefix_sum[i][j] = 1;
            else
            {
                prefix_sum[i][j] = 0;
            }
            if (i - 1 >= 0)
            {
                prefix_sum[i][j] += prefix_sum[i - 1][j];
            }
            if (j - 1 >= 0)
            {
                prefix_sum[i][j] += prefix_sum[i][j - 1];
            }
            if (i - 1 >= 0 and j - 1 >= 0)
            {
                prefix_sum[i][j] -= prefix_sum[i - 1][j - 1];
            }
        }
    }
    int no_of_mangos[4], max_mango = -1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            no_of_mangos[0] = prefix_sum[i - 1][j - 1];
            no_of_mangos[1] = prefix_sum[i - 1][m - 1] - prefix_sum[i - 1][j - 1];
            no_of_mangos[2] = prefix_sum[n - 1][j - 1] - prefix_sum[i - 1][j - 1];
            no_of_mangos[3] = prefix_sum[n - 1][m - 1] - no_of_mangos[0] - no_of_mangos[1] - no_of_mangos[2];
            sort(no_of_mangos, no_of_mangos + 4);

            max_mango = max(max_mango, no_of_mangos[0]);
        }
    }
    return max_mango;
}

int main()
{
    char grid[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << max_no_of_mango_trees(grid, n, m);
    return 0;
}

/*
6 6
. # # . . .
# . . # # .
. # . . . .
. # # . . #
# . . # # .
. # . . . .
 */
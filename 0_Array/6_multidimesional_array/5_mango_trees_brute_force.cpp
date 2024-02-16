#include <iostream>
#include <algorithm>
using namespace std;

/*
Problem: Rahul's father has left a farm organized as an N X N grid. Each square in the grid either has or does not have a mango tree. He has to divide the farm with his three sisters as follows: he will draw one horizontal line and one vertical line to divide the field into four rectangles. His sisters will choose three of the four smaller fields and he gets the last one.

Output: Max no of trees he can get.

 */

// This is a bruteforce approach. Time complexity of this approach is O(N^4)
int max_no_of_mango_trees(char grid[][100], int n, int m)
{
    int no_of_mangos[4] = {0};
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            for (int k = 0; k < i; k++)
            {
                for (int l = 0; l < j; l++)
                {
                    if (grid[k][l] == '#')
                    {
                        no_of_mangos[0]++;
                    }
                }
            }
            for (int k = 0; k < i; k++)
            {
                for (int l = j; l < n; l++)
                {
                    if (grid[k][l] == '#')
                    {
                        no_of_mangos[1]++;
                    }
                }
            }
            for (int k = i; k < n; k++)
            {
                for (int l = 0; l < j; l++)
                {
                    if (grid[k][l] == '#')
                    {
                        no_of_mangos[2]++;
                    }
                }
            }
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < n; l++)
                {
                    if (grid[k][l] == '#')
                    {
                        no_of_mangos[3]++;
                    }
                }
            }
            sort(no_of_mangos, no_of_mangos + 4);
            if (no_of_mangos[0] > max)
                max = no_of_mangos[0];
            for (int k = 0; k < 4; k++)
            {
                no_of_mangos[k] = 0;
            }
        }
    }
    return max;
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
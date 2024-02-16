#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'

/*
Sudoku solver:
Given a partially filled Sudoku matrix of 9x9, write a function to fill the matrix using Sudoku rules

Sample input:
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

Sample output:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
*/

void print_board(vector<vector<int> > &sudoku_board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << sudoku_board[i][j] << " ";
        }
        cout << endl;
    }
}

bool valid_fill(vector<vector<int> > &sudoku_board, int i, int j, int val, int n)
{
    for (int idx = 0; idx < n; idx++)
    {
        if (sudoku_board[i][idx] == val || sudoku_board[idx][j] == val)
        {
            return false;
        }
    }
    int s_x = (i / 3) * 3;
    int s_y = (j / 3) * 3;
    for (int x = s_x; x < s_x + 3; x++)
    {
        for (int y = s_y; y < s_y + 3; y++)
        {
            if (sudoku_board[x][y] == val)
            {
                return false;
            }
        }
    }
    return true;
}

int solve(vector<vector<int> > &sudoku_board, int i, int j, int n)
{
    if (i == n)
    {
        print_board(sudoku_board);
        return 1;
    }
    if (j == n)
    {
        return solve(sudoku_board, i + 1, 0, n);
    }
    if (sudoku_board[i][j] != 0)
    {
        return solve(sudoku_board, i, j + 1, n);
    }
    int ways = 0;
    for (int val = 1; val <= 9; val++)
    {
        if (valid_fill(sudoku_board, i, j, val, n))
        {
            sudoku_board[i][j] = val;
            ways += solve(sudoku_board, i, j + 1, n);
        }
    }
    sudoku_board[i][j] = 0;
    return ways;
}

int main()
{
    vector<vector<int> > sudoku_board(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku_board[i][j];
        }
    }

    cout << endl;
    int ways = solve(sudoku_board, 0, 0, 9);
    if (ways > 0)
    {
        cout << ways << endl;
    }
    else
    {
        cout << "NO solution exists!" << endl;
    }
    return 0;
}

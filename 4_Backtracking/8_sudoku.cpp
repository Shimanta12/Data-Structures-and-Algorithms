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

pair<int, int> unfilled_cell(vector<vector<int>> &sudoku_board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (sudoku_board[i][j] == 0)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

bool valid_fill(int row, int col, int num, vector<vector<int>> &sudoku_board)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudoku_board[row][i] == num)
        {
            return false;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        if (sudoku_board[i][col] == num)
        {
            return false;
        }
    }
    int r = (row / 3) * 3;
    int c = (col / 3) * 3;
    for (int i = r; i < r + 3; i++)
    {
        for (int j = c; j < c + 3; j++)
        {
            if (sudoku_board[i][j] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<int>> &sudoku_board)
{
    pair<int, int> cell = unfilled_cell(sudoku_board);
    int i = cell.first, j = cell.second;
    if (i == -1 and j == -1)
    {
        return true;
    }
    for (int idx = 1; idx <= 9; idx++)
    {
        if (valid_fill(i, j, idx, sudoku_board))
        {
            sudoku_board[i][j] = idx;
            bool result = solve(sudoku_board);
            if (result)
            {
                return true;
            }
        }
    }
    sudoku_board[i][j] = 0;
    return false;
}

int main()
{
    vector<vector<int>> sudoku_board(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> sudoku_board[i][j];
        }
    }

    cout << endl;
    if (solve(sudoku_board))
    {
        for (vector<int> row : sudoku_board)
        {
            for (int col : row)
            {
                cout << col << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NO solution exists!" << endl;
    }
    return 0;
}

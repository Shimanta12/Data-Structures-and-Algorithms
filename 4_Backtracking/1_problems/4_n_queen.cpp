#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
***** N- Queen *****
N-queen is the problem of placing N queens on an NxN chessboard so that no two queens attack each other.
 */

/*
Possible variations:
--> Print one configuration and check if solution exist!
--> Print all configuration
--> Count possible configuration
 */

void print_chess_board(vector<vector<int>> &chessboard)
{
    int size = chessboard.size();
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << chessboard[row][col] << " ";
        }
        cout << endl;
    }
}

bool valid_pos(int n, int row, int col, vector<vector<int>> &chessboard)
{
    for (int i = row - 1; i >= 0; i--)
    {
        if (chessboard[i][col])
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
    {
        if (chessboard[i][j] == 1)
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 and j < n; i--, j++)
    {
        if (chessboard[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

bool solve_n_queen(int n, int i, vector<vector<int>> &chessboard)
{
    if (i == n)
    {
        return true;
    }
    for (int idx = 0; idx < n; idx++)
    {
        if (valid_pos(n, i, idx, chessboard))
        {
            chessboard[i][idx] = 1;
            bool res = solve_n_queen(n, i + 1, chessboard);
            if (res)
            {
                return true;
            }
            chessboard[i][idx] = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> chessboard(n, vector<int>(n, 0));
    bool res = solve_n_queen(n, 0, chessboard);
    if (res)
    {
        print_chess_board(chessboard);
    }
    else
    {
        cout << "No solution exist!" << endl;
    }
    return 0;
}
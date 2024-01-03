#include <iostream>
using namespace std;

/*
Write a function that takes nxm 2D array, and it prints all array elements in a spiral order. Starts from top left corner, goes to right, proceeds in a spiral pattern until every element is visited.

Sample input:
            1  2  3  4  5
            16 17 18 19 6
            15 24 25 20 7
            14 23 22 21 8
            13 12 11 10 9

Sample output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25

 */

void spiral_print(int arr[][100], int n, int m)
{
    int start_row = 0;
    int end_row = n - 1;
    int start_col = 0;
    int end_col = m - 1;
    while (start_row <= end_row and start_col <= end_col)
    {
        // Start row
        for (int col = start_col; col <= end_col; col++)
        {
            cout << arr[start_row][col] << " ";
        }

        // End col
        for (int row = start_row + 1; row <= end_row; row++)
        {
            cout << arr[row][end_col] << " ";
        }

        // End row
        for (int col = end_col - 1; col >= start_col; col--)
        {
            if (start_row == end_row)
                break;
            cout << arr[end_row][col] << " ";
        }

        // Start col
        for (int row = end_row - 1; row >= start_row + 1; row--)
        {
            if (start_col == end_col)
                break;
            cout << arr[row][start_col] << " ";
        }
        // Updating row and col pointers.
        start_row++;
        end_row--;
        start_col++;
        end_col--;
    }
}

int main()
{
    int arr[100][100];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    spiral_print(arr, n, m);
    return 0;
}

/*

1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9



1  2  3  4
12 13 14 5
11 16 15 6
10 9  8  7



 */
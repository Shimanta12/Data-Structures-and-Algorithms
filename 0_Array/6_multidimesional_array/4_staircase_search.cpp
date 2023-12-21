#include <iostream>
using namespace std;

/*

Problem: Write a function that searches for an element in row wise and column wise sorted 2D Array.

We could have used binary search for each row or each column.
In that way the complexity would have been O(n logm) or O(m logn).
But we have used a better approach which is known as staircase search. And this approach can only be applied if the 2D array is row wise and column wise sorted.
 */

pair<int, int> staircase_search(int arr[][100], int n, int m, int key)
{
    if (key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int row = 0, col = m - 1;
    while (row < n and col >= 0)
    {
        if (key == arr[row][col])
        {
            return {row, col};
        }
        else if (key < arr[row][col])
        {
            col--;
        }
        else if (key > arr[row][col])
        {
            row++;
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[100][100];
    int n, m, key;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> key;
    pair<int, int> result = staircase_search(arr, n, m, key);
    int row_idx = result.first, col_idx = result.second;
    if (row_idx == -1 and col_idx == -1)
    {
        cout << "NOT Found!" << endl;
    }
    else
    {
        cout << row_idx << " " << col_idx << endl;
    }
    return 0;
}

/*
4 4
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
39

 */
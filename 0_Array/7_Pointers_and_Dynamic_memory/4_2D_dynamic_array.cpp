#include <iostream>
using namespace std;

#define endl "\n"

int **create2DArray(int row, int col)
{
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    int value = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{
    int row, col;
    cin >> row >> col;
    int **arr = create2DArray(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
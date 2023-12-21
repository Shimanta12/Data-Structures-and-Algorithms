#include <iostream>
using namespace std;

// Pass by reference
void print(int arr[][100], int n, int m) // Gotta specify the column number
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Constraint
    int arr[1000][100];

    // n rows and m columns
    int n, m;
    cin >> n >> m;

    // 2D array input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // 2D array output
    print(arr, n, m);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // unlike a 2D array, a 2d vector can have 1D array of different columns;
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6, 7, 8},
        {9, 10, 11},
        {12, 13, 14}};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (vector<int> row : arr)
    {
        for (int col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
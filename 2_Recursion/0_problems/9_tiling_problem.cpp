#include <iostream>
using namespace std;

#define endl "\n"

/*
Given a "4 X n" board and tiles of size "4 X 1", count the number of ways to tile the given board using the "4 X 1" tiles.
A tile can either be placed horizonatally i.e. as a "1x4" tile or vertically i.e. as "4 X 1" tile.


 */

int num_of_ways(int n)
{
    if (n == 0)
        return 0;
    if (n <= 3)
        return 1;
    if (n == 4)
        return 2;
    return num_of_ways(n - 1) + num_of_ways(n - 4);
}

int main()
{
    int n;
    cin >> n;
    cout << num_of_ways(n) << endl;
    return 0;
}
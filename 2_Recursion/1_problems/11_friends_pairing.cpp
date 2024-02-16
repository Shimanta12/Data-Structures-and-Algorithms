#include <iostream>
using namespace std;

#define endl "\n"

/*
Given n friends who want to go to party, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or paired  up.

 */

int no_of_ways(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return no_of_ways(n - 1) + (n - 1) * no_of_ways(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << no_of_ways(n) << endl;
    return 0;
}
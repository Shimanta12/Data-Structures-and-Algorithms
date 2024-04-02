#include <iostream>
using namespace std;

// Time complexity -- O(2^n)
/*
While computing time complexity for this recursive function we will assume that the recursive tree of function calls is full binary tree. Then the number of function calls will be (in case of 5) 2^4 + 2^3 + 2^2 + 2^1 + 2^0 i.e. 16 + 8 + 4 + 2 + 1

if we genralize the function call for input 'n', then the number of function call 1 + 2 + 4 + 8 + ... ... + 2^(n-1) if we add all of these we will get the total number of function calls. This series is GP(Geometric progression). And the formula to calculate the sum is:

s(n terms) = (a(r^n - 1)/(r-1) [Where a is initial term, r is ratio of two consecutive terms in the series and n is the number of terms]
 */

// Space complexity -- O(n) [Maximum utilization of the memory for the call stack]
int fibo(int n)
{
    if (n == 1 or n == 2)
        return n - 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}
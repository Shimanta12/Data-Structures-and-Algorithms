#include <iostream>
#include <vector>
using namespace std;

/*
// Why bitwise operators?
    -- They operate on the binary representation level
    -- They are fast

// Bitwise operators:
    -- Binary AND (&)
    -- Binary OR (|)
    -- Binary XOR (^)
    -- Binary One's complement (~)
    -- Binary left shift (<<) [a<<b -- a*2^b]
    -- Binary right shift (>>) [a>>b -- a/2^b]

// Bitwise not (~) inverse all the bits of a number in their binary representation.
// Bitwise not of bit 0 is bit 1 and vice versa. But bitwise not of integer 0 is -1.

// 2's complement of 101 is 011
// 2's complement of 011 is 101


 */
int main()
{
    int n = 3;
    cout << ~n << endl;
    return 0;
}
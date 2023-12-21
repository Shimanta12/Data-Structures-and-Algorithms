#include <iostream>
using namespace std;

int main()
{
    char sentence[100];
    cin >> sentence; // If want to get a sentence with multiple words, we can't use cin. Cause it stops taking input as soon as it encounters whitespace(space, newline, tab).
    cout << sentence;
    return 0;
}
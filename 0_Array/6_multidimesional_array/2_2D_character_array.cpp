#include <iostream>
using namespace std;

void print(char strings[][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << strings[i] << endl;
    }
}

int main()
{
    int n = 5;
    char strings[][10] = {
        "One",
        "Two",
        "Three",
        "Four",
        "Five"};

    print(strings, n);

    return 0;
}
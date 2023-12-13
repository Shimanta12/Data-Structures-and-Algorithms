#include <iostream>
using namespace std;

int main()
{
    // Declaring an array which is telling the compiler to allocate 100 contiguous memory block for each of marks element which are integers. 100*4 400 = bytes
    int marks[100] = {-1}; // Declaring and initializing the array. This result as marks[0] = -1 and all the index's valuse as 0;
    int n;
    cout << "Enter student number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> marks[i];         // array input
        marks[i] = marks[i] + 2; // array update
    }

    // array output
    for (int i = 0; i < 100; i++)
    {
        cout << marks[i];
        if (i != n && i != 99)
            cout << ", ";
    }
    cout << endl;
    return 0;
}
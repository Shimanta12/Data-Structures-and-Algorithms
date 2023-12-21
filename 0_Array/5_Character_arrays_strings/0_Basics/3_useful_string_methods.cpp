#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "Shimanto";
    char b[100];
    // Length of a string using strlen()
    cout << strlen(a) << endl;

    // Copy one string to another using strcpy(destination, source)
    strcpy(b, a);
    cout << b << endl;

    // Compare two string using strcmp(a, b). Returns 0 if equal. Negative if a is higher in the lexiograpical order, positive if lower in order.
    cout << strcmp(a, b) << endl;

    // Concatenate two string using strcat(a,b).
    char c[] = "Hello ";
    cout << strcat(c, a) << endl;

    cout << strcmp(a, c) << endl
         << strcmp(c, a) << endl;

    return 0;
}
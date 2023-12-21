#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.get();

    string str; // Dynamic character array.
    vector<string> sarr;
    while (n--)
    {
        getline(cin, str);
        sarr.push_back(str);
    }

    for (string x : sarr)
    {
        cout << x << endl;
    }
    return 0;
}
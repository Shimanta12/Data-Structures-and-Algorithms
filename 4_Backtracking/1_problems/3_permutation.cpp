#include <bits/stdc++.h>
using namespace std;

void permutations(string str, int i, int &count)
{
    if (i == str.length())
    {
        count++;
        cout << str << endl;
        return;
    }
    for (int idx = i; idx < str.length(); idx++)
    {
        swap(str[i], str[idx]);
        permutations(str, i + 1, count);
        swap(str[i], str[idx]);
    }
}

int main()
{
    string str;
    cin >> str;
    int count = 0;
    permutations(str, 0, count);
    cout << count << endl;

    return 0;
}
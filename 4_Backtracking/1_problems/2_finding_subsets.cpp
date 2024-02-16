#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

void find_subsets(char *str, char *output, int i, int j, vector<string> &subsets)
{
    if (str[i] == '\0')
    {
        output[j] = '\0';
        subsets.push_back(output);
        return;
    }
    output[j] = str[i];
    find_subsets(str, output, i + 1, j + 1, subsets);
    find_subsets(str, output, i + 1, j, subsets);
}

int main()
{
    char str[100], output[100];
    cin >> str;
    vector<string> subsets;
    find_subsets(str, output, 0, 0, subsets);
    sort(subsets.begin(), subsets.end(), compare);
    cout << endl
         << endl;
    for (string subset : subsets)
    {
        cout << "\"" << subset << "\"" << endl;
    }
    return 0;
}
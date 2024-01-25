#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

void permuatation(char *str, char *output, int i, int j, int len, vector<string> &permuatations)
{
    if (j == len)
    {
        output[j] = '\0';
        permuatations.push_back(output);
        return;
    }
    for (int idx = i; idx < len; idx++)
    {
        swap(str[idx], str[i]);
        output[j] = str[i];
        permuatation(str, output, i + 1, j + 1, len, permuatations);
        swap(str[idx], str[i]);
    }
}

int main()
{
    char str[100], output[100];
    cin >> str;
    vector<string> permutations;
    permuatation(str, output, 0, 0, strlen(str), permutations);
    for (string p : permutations)
    {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}
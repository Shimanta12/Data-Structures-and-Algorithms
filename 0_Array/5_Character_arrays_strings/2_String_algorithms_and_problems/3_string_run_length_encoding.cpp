#include <iostream>
#include <string>
using namespace std;

/*Run length encoding
You are given a string consisting of only capital letters. You have to compress the string.
If compressed string is bigger than the original, return the original.

Sample input 1 : aaabbbccc
Sample output 1: a3b3c3

Sample input 2 : abcd
Sample output 1: abcd
 */

string compressString(string str)
{
    int n = str.length(), count;
    string output = "";
    for (int i = 0; i < n; i++)
    {
        count = 1;
        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if (n < output.length())
        return str;
    else
        return output;
}

int main()
{
    string s;
    cin >> s;
    cout << compressString(s);

    return 0;
}
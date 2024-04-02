#include <bits/stdc++.h>
using namespace std;

#define optimize()           \
    ios::sync_with_stdio(0); \
    cin.tie(0);

#define file_input()                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define endl "\n"
#define ll long long

#define MOD 1e9 + 7
#define INF 2e9

vector<vector<int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

void solve(int tc)
{
    string str;
    cin >> str;

    vector<int> freq(26);

    int odds = 0;
    int odd_idx = -1;

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2)
        {
            odds++;
            odd_idx = i;
        }
    }

    if (odds > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0 and i != odd_idx)
            {
                int half = freq[i] / 2;
                while (freq[i] > half)
                {
                    cout << (char)('A' + i);
                    freq[i]--;
                }
            }
        }

        if (odd_idx != -1)
        {
            while (freq[odd_idx] > 0)
            {
                cout << (char)('A' + odd_idx);
                freq[odd_idx]--;
            }
            freq[odd_idx]--;
        }

        for (int i = 25; i >= 0; i--)
        {
            if (freq[i] > 0)
            {
                while (freq[i] > 0)
                {
                    cout << (char)('A' + i);
                    freq[i]--;
                }
            }
        }
    }
}

int tc = 0;
int main()
{
    optimize();
    // file_input();

    if (tc)
    {
        cin >> tc;
        for (int i = 1; i <= tc; i++)
        {
            solve(i);
        }
    }
    else
    {
        solve(1);
    }

    return 0;
}
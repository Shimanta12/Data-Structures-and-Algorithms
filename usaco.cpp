#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define F first
#define S second

int d[8][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

const int MOD = 1000000007;
const int INF = 2e9;

void IO(string filename)
{
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
}

void solve(int tc)
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int cover[100] = {0};

    for (int i = a; i < b; i++)
        cover[i] = 1;

    for (int i = x; i < y; i++)
        cover[i] = 1;

    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        if (cover[i] == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    IO("paint");

    int tc = 1;

    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}
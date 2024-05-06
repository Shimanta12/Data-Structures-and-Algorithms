/* ------------------------------------------------------------------------
  |                                                                        |
  |  Solved without || with the help of editorial by "Emon Barua Shimanto" |
  |                                                                        |
   ------------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define endl "\n"

// using vi = vector<int>;
// #define pb push_back
// #define all(x) begin(x), end(x)
// #define sz(x) (int)(x).size()

// using pi = pair<int, int>;
// #define f first
// #define s second
// #define mp make_pair

// int d[8][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

// const int MOD = 1000000007;
// const int INF = 2e9;

// #define dbg(v) \
//     cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int n, arr[100];

void solve(int tc)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(arr[i], arr[j]) <= 2)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;

    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}
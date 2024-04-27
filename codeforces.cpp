#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define endl "\n"

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair

int d[8][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

const int MOD = 1000000007;
const int INF = 2e9;

#define dbg(v) \
    cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

void solve(int tc)
{
    int n, k;
    cin >> n >> k;

    vi freq(101, 0);

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    for (int elem : freq)
    {
        if (elem >= k)
        {
            cout << k - 1 << endl;
            return;
        }
    }
    cout << n << endl;
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
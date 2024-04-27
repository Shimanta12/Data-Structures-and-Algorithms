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

#define dbg(v)                                                                 \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

void set_IO(string filename)
{
    freopen((filename + ".in").c_str(), "r", stdin);
    freopen((filename + ".out").c_str(), "w", stdout);
}

void solve(int tc)
{
    string farm[11];

    int barn_row, barn_col, lake_row, lake_col, rock_row, rock_col;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cin >> farm[i][j];
            if (farm[i][j] == 'B')
            {
                barn_row = i;
                barn_col = j;
            }
            else if (farm[i][j] == 'L')
            {
                lake_row = i;
                lake_col = j;
            }
            else if (farm[i][j] == 'R')
            {
                rock_row = i;
                rock_col = j;
            }
        }
    }
    int cows = abs(barn_row - lake_row) + abs(barn_col - lake_col) - 1;

    if (barn_row == rock_row && barn_row == lake_row && ((barn_col < rock_col && rock_col < lake_col) || lake_col < rock_col && rock_col < barn_col))
    {
        cows += 2;
    }
    else if (barn_col == rock_col && barn_col == lake_col && ((barn_row < rock_row && rock_row < lake_row) || lake_row < rock_row && rock_row < barn_row))
    {
        cows += 2;
    }

    cout << cows << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set_IO("buckets");

    int tc = 1;

    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}